%{
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <ctype.h>

#include "g2r.h"
#include "g2r_config.h"

/*
 * defined from lex.yy.c
 */
extern int yylineno;
extern struct g2r_config gconfig;   
extern int yylex (void);

void yyerror(char* s, ...);
void gerror(char* s, ...);
void dbgprintf(char* s, ...);
int is_type(char* str);
int extract_package_name(struct package_t* pkg, char* package_name);
char* get_tmp_message_name();
char* get_tmp_enum_name();

void fill_package_name(struct package_t* pkg);

int insert_item_to_enum(struct enum_t* em, struct enum_item_t* em_item);
int insert_expression_to_message(struct message_t* msg, struct expression_t* expression);
int insert_enum_to_message(struct message_t* msg, struct enum_t* em);
int insert_enum_to_package(struct package_t* pkg, struct enum_t* em);
int insert_message_to_package(struct package_t* pkg, struct message_t* msg);
int get_expression_message_to_message(struct message_t* dst, struct message_t* src);

struct enum_item_t* create_enum_item(char* name, char* value);
#define close_enum_item(em_item) if ((em_item)) { free((em_item)); (em_item) = NULL; }

struct expression_t* create_expression(int repeated, char* type, char* name, char* value);
struct expression_t* create_map_expression(char* key_type, char* value_type, char* name, char* value);
#define close_expression(express) if ((express)) { free((express)); (express) = NULL; }
struct message_t* map_expression_to_message(struct expression_t*);

struct enum_t* create_enum(char* em_name);
void close_enum(struct enum_t* em);

struct message_t* create_message(char* msg_name);
void close_message(struct message_t* msg);

struct package_t* create_package(char* pkg_name);
void close_package(struct package_t* pkg);

struct package_t* gpackage = NULL;
struct package_t* cpackage = NULL;

struct package_t* global_make_package(char* pkg_name);
struct package_t* global_popkg();

void reset_yyparse();
int is_curr_package_created = 0;

%} 

%union {
  char text[256];
  struct package_t* pkg;
  struct message_t* msg;
  struct enum_t* em;
  struct enum_item_t* em_item;
  struct expression_t* express;
  struct header_t* hdr;
}

// 去掉了SEMICOLON,只在词法上作为分隔字面值所用，语法不做严格处理

%token SYNTAX IMPORT PACKAGE MESSAGE ENUM ONEOF MAP REPEATED
%token <text> PROTO PATH PACKAGE_NAME PACKAGE_TYPE SYMBOL INTEGER NUMBER BOOLT BOOLF
%token QUOTATION ASSIGN COMMA LBRACE RBRACE LDASH RDASH
%token EOL

// protocal_maker
%type <pkg> protocal protocal_context
%type <msg> message message_body oneof oneof_body
%type <em> enum enum_body
%type <express> expression
%type <em_item> enum_expression
%type <text> type

%start protocal
%%
protocal: protocal_maker protocal_context EOL {
  $$ = $2;
  return 0;
}
;

protocal_maker: statement {}
| protocal_maker statement {}
;

statement: SYNTAX ASSIGN QUOTATION PROTO QUOTATION {
  if (!is_curr_package_created) global_make_package("");
  strcpy(cpackage->header.syntax, $4);
}
| IMPORT QUOTATION PATH QUOTATION {
  if (!is_curr_package_created) global_make_package("");
  if (cpackage->header.ifile_count >= MAX_IMPORT_FILES) {
    yyerror("import file is over the limit(%d)\r\n", MAX_IMPORT_FILES);
    return -1;
  }
  strcpy(cpackage->header.import_files[cpackage->header.ifile_count++], $3);
}
| PACKAGE PACKAGE_NAME {
  if (!is_curr_package_created) global_make_package("");
  int ret = extract_package_name(cpackage, $2);
  if (ret != 0) {
    return ret;
  }

  //char* name = cpackage->header.package_name[cpackage->header.package_name_count-1];
  fill_package_name(cpackage);
}
;

protocal_context: message {
  if (insert_message_to_package(cpackage, $1) != 0) return -1;
  $$ = cpackage;
}
| enum {
  if (insert_enum_to_package(cpackage, $1) != 0) return -1;
  $$ = cpackage;
}
| protocal_context message { 
  if (insert_message_to_package($1, $2) != 0) return -1;
  $$ = $1;
}
| protocal_context enum {
  if (insert_enum_to_package($1, $2) != 0) return -1;
  $$ = $1;
}
;

message: MESSAGE SYMBOL LBRACE message_body RBRACE {
  dbgprintf("rename message `%s` to `%s`\r\n", $4->name, $2);
  strcpy($4->name, $2);
  $$ = $4;
}
| MESSAGE SYMBOL LBRACE RBRACE {
  struct message_t* msg = create_message($2);
  if (!msg) return -1;
  $$ = msg;
}
;

message_body: expression {
  struct message_t* msg = create_message(get_tmp_message_name());
  if (!msg) return -1;
  if (insert_expression_to_message(msg, $1) != 0)
    return -1;
  if ($1->map) {
    // 扩展为一个消息
    struct message_t* map_msg = map_expression_to_message($1);
    if (!map_msg)
      return -1;
    if (insert_message_to_package(cpackage, map_msg) != 0)
      return -1;
  }
  $$ = msg;
}
| message_body expression {
  if (insert_expression_to_message($1, $2) != 0)
    return -1;
  if ($2->map) {
    struct message_t* map_msg = map_expression_to_message($2);
    if (!map_msg) return -1;
    if (insert_message_to_package(cpackage, map_msg) != 0)
      return -1;
  }
  $$ = $1;
}
| message {
  if (insert_message_to_package(cpackage, $1) != 0)
    return -1;

  // 创建空消息体
  struct message_t* msg = create_message(get_tmp_message_name());
  if (!msg) return -1;
  $$ = msg;
}
| message_body message {
  if (insert_message_to_package(cpackage, $2) != 0)
    return -1;
  $$ = $1;
}
| enum {
  /*
   * 这里修改枚举体到插入到包体内，google buffer protocal
   * 中会将在message中定义的枚举体定义到类外，在包命名空间下
   * 然后在message对应的类中,定义一组`static const xxx`的变量
   * 来保存枚举体的每个内容
   *
   * 直接将message内的枚举体直接插入到包内, 作为独立的ros msg文件
   */
  //if (insert_enum_to_message(msg, $1) != 0)
  if (insert_enum_to_package(cpackage, $1) != 0)
    return -1;
  
  // 创建空消息体
  struct message_t* msg = create_message(get_tmp_message_name());
  if (!msg) return -1;
  $$ = msg;
}
| message_body enum {
  // 这里的处理同上
  //if (insert_enum_to_message($1, $2) != 0)
  if (insert_enum_to_package(cpackage, $2) != 0)
    return -1;
  $$ = $1;
}
| oneof {
  //struct message_t* msg = create_message("");
  //if (!msg) return -1;
  //if (get_expression_message_to_message(msg, $1) != 0)
  //  return -1;
  //$$ = msg;
  dbgprintf("define oneof '%s' in message first element\r\n", $1->name);
  $$ = $1;
}
| message_body oneof {
  if (get_expression_message_to_message($1, $2) != 0)
    return -1;
  free($2); // 这里不需要临时的message结构了
  $$ = $1;
}
;

oneof: ONEOF SYMBOL LBRACE oneof_body RBRACE {
  //strcpy($4->name, $2);
  $$ = $4;
}
;

oneof_body: SYMBOL SYMBOL ASSIGN INTEGER {
  if (!is_type($2)) {
    yyerror("invalid type\r\n");
    return -1;
  }
  struct message_t* msg = create_message(get_tmp_message_name());
  if (!msg) return -1;

  struct expression_t* express = create_expression(0, $1, $2, $4);
  if (!express) return -1;

  if (insert_expression_to_message(msg, express) != 0)
    return -1;

  $$ = msg;
}
| oneof_body SYMBOL SYMBOL ASSIGN INTEGER {
  if (!is_type($2)) {
    yyerror("invalid type\r\n");
    return -1;
  }

  struct expression_t* express = create_expression(0, $2, $3, $5);
  if (!express) return -1;

  if (insert_expression_to_message($1, express) != 0)
    return -1;

  $$ = $1;
}
;

expression: type SYMBOL ASSIGN INTEGER {
  struct expression_t* express = create_expression(0, $1, $2, $4);
  if (!express) return -1;
  $$ = express;
}
| REPEATED type SYMBOL ASSIGN INTEGER {
  struct expression_t* express = create_expression(1, $2, $3, $5);
  if (!express) return -1;
  $$ = express;
}
| MAP LDASH SYMBOL COMMA SYMBOL RDASH SYMBOL ASSIGN INTEGER {
  struct expression_t* express = create_map_expression($3, $5, $7, $9);
  if (!express) return -1;
  $$ = express;
}
;

type: SYMBOL {
  if (!is_type($1)) {
    yyerror("invalid type\r\n");
    return -1;
  }
  strcpy($$, $1);
}
| PACKAGE_TYPE { 
  if (!is_type($1)) {
    yyerror("invalid type\r\n");
    return -1;
  }
  strcpy($$, $1);
}
;

enum: ENUM SYMBOL LBRACE enum_body RBRACE {
  dbgprintf("rename enum `%s` to `%s`\r\n", $4->name, $2);
  strcpy($4->name, $2);
  $$ = $4;
}
;

enum_body: enum_expression {
  struct enum_t* em = create_enum(get_tmp_enum_name());
  if (!em) return -1;
  if (insert_item_to_enum(em, $1) != 0)
    return -1;
  $$ = em;
}
| enum_body enum_expression {
  if (insert_item_to_enum($1, $2) != 0)
    return -1;
  $$ = $1;
}
;

enum_expression: SYMBOL ASSIGN NUMBER {
  struct enum_item_t* em_item = create_enum_item($1, $3);
  if (!em_item) return -1;
  $$ = em_item;
}
;

%%
void yyerror(char* s, ...) {
  va_list ap;
  va_start(ap, s);

  fprintf(stderr, "%d: error: ", yylineno);
  vfprintf(stderr, s, ap);
  fprintf(stderr, "\n");
  va_end(ap);
  return;
}

void gerror(char* s, ...) {
  va_list ap;
  va_start(ap, s);
  vfprintf(stderr, s, ap);
  fprintf(stderr, "\n");
  va_end(ap);
  return;
}
#define check_malloc(v) { \
  if (!(v)) { \
    gerror("<I/O error>malloc failed\r\n"); \
    return NULL; \
  } \
}

void dbgprintf(char* s, ...) {
#ifdef ENABLE_YYPARSE_DBG
  char buffer[256] = {0};
  va_list ap;
  va_start(ap, s);
  vsprintf(buffer, s, ap);
  printf("[parse dbginfo]%s", buffer);
  va_end(ap);
#endif
  return; 
}

char* get_tmp_message_name() {
  static char tmp[MAX_NAME_SIZE] = {0};
  static int count = 0;

  sprintf(tmp, "message_tmp_%d", count++);
  return tmp;
}

char* get_tmp_enum_name() {
  static char tmp[MAX_NAME_SIZE] = {0};
  static int count = 0;

  sprintf(tmp, "enum_tmp_%d", count++);
  return tmp;  
}

// 在使用此函数之前,调用 extract_package_name 函数
void fill_package_name(struct package_t* pkg) {
  assert(pkg);
  /*
   * 如果第一个是apollo那么则跳过,使用随后的合成包名
   */
  char package_name[MAX_NAME_SIZE] = {0};

  for (int i = 0; i < cpackage->header.package_name_count; i++) {
    strcat(package_name, pkg->header.package_name[i]);
    if (i < pkg->header.package_name_count-1) {
      strcat(package_name, "_");
    }
  }

  //sprintf(package_name, "ros_%s", package_name);
  strcpy(pkg->name, package_name);
  return;
}

static char str_internal_type[] = 
  "double float int64 uint64 int32 fixed64 fixed32 bool string group bytes uint32 sfixed32 sfixed64 sint32 sint64";

static int is_internal_type(char* str) {
  char* token = strtok(str_internal_type, " ");
  while (token) {
    if (strcmp(str, token) == 0)
      return 1;
    token = strtok(NULL, " ");
  }
  return 0;
}

int is_type(char* str) {
  if (is_internal_type(str))
    return 1;

  /* 确定str是否是在一个包内
   * 当前直接忽略,毕竟不是做解释器不需要那么严谨的错误判断
   */
  return 1;
}

static int invalid_package_name(char* name) {
  return 0;
}

int extract_package_name(struct package_t* pkg, char* package_name) {
  char* token = strtok(package_name, ".");
  while (token) {
    if (pkg->header.package_name_count >= MAX_PACKAGE_SPACE) {
      gerror("package list in package name is over the limit(%d)\r\n", MAX_PACKAGE_SPACE);
      return -1;
    }
    if (invalid_package_name(token) != 0) {
      gerror("invalide package name = %s\r\n", token);
      return -2;
    }
    strcpy(pkg->header.package_name[pkg->header.package_name_count++], token);
    token = strtok(NULL, ".");
  }
  return 0;
}

int insert_item_to_enum(struct enum_t* em, struct enum_item_t* em_item) {
  assert(em && em_item);

  dbgprintf("insert enum item '%s' to enum '%s'\r\n", em_item->name, em->name);

  if (em->item_count >= MAX_ITEM_IM_ENUM) {
    gerror("item in enum is over the limit(%d)\r\n", MAX_ITEM_IM_ENUM);
    return -1;
  }

  em->items[em->item_count] = em_item;
  em->item_count++; 

  return 0;
}

int insert_expression_to_message(struct message_t* msg, struct expression_t* expression) {
  assert(msg && expression);

  dbgprintf("insert express '%s' to message '%s'\r\n", expression->name, msg->name);

  if (msg->exp_count >= MAX_EXP_IN_MESSAGE) {
    gerror("expression in message is over the limit(%d)\r\n", MAX_EXP_IN_MESSAGE);
    return -1;
  }

  msg->expressions[msg->exp_count] = expression;
  msg->exp_count++;
  return 0;
}

int insert_enum_to_message(struct message_t* msg, struct enum_t* em) {
  assert(msg && em);

  dbgprintf("insert enum '%s' to message '%s'\r\n", em->name, msg->name);

  if (msg->enum_count >= MAX_ENUM_IN_MESSAGE) {
    gerror("enum in message is over the limit(%d)\r\n", MAX_ENUM_IN_MESSAGE);
    return -1;
  }

  msg->enums[msg->enum_count] = em;
  msg->enum_count++;
  return 0;
}

/*
 * 将enum当作独立的一个message使用
 */
int insert_enum_to_package(struct package_t* pkg, struct enum_t* em) {
  assert(pkg && em);

  dbgprintf("insert enum '%s' to package '%s'\r\n", em->name, pkg->name);

  struct message_t* msg = (struct message_t*)malloc(sizeof(struct message_t));
  if (!msg) {
    gerror("<I/O error>malloc failed\r\n");
    return -1;
  }
  memset(msg, 0, sizeof(struct message_t));

  strcpy(msg->name, em->name);
  msg->type = 1;
  msg->enums[0] = em;
  msg->enum_count = 1;

  return insert_message_to_package(pkg, msg);
}

int insert_message_to_package(struct package_t* pkg, struct message_t* msg) {
  assert(pkg && msg);

  dbgprintf("insert message '%s' to package '%s'\r\n", msg->name, pkg->name);

  if (pkg->message_count >= MAX_MESSAGE_IN_PACKAGE) {
    gerror("message in package is over the limit(%d)\r\n", MAX_MESSAGE_IN_PACKAGE);
    return -1;
  }

  pkg->messages[pkg->message_count] = msg;
  pkg->message_count++;
  return 0;
}

int get_expression_message_to_message(struct message_t* dst, struct message_t* src) {
  assert(dst && src);

  dbgprintf("insert expression message to message '%s'\r\n", dst->name);

  int j = dst->exp_count;
  for (int i = 0; i < src->exp_count; i++) {
    if (j + i >= MAX_EXP_IN_MESSAGE) {
      gerror("express in message is over limit\r\n");
      return -1;
    }
    dst->expressions[j + i] = src->expressions[i];
  }
  dst->exp_count += src->exp_count;
  return 0;
}

struct enum_item_t* create_enum_item(char* name, char* value) {
  struct enum_item_t* item = (struct enum_item_t*)malloc(sizeof(struct enum_item_t));
  check_malloc(item);
  memset(item, 0, sizeof(struct enum_item_t));
  strcpy(item->name, name);
  strcpy(item->value, value);
  return item;
}

struct expression_t* create_expression(int repeated, char* type, char* name, char* value) {
  struct expression_t* express = (struct expression_t*)malloc(sizeof(struct expression_t));
  check_malloc(express);
  memset(express, 0, sizeof(struct expression_t));
  express->repeated = repeated;
  strcpy(express->type, type);
  strcpy(express->name, name);
  strcpy(express->value, value);
  return express;
}

struct expression_t* create_map_expression(char* key_type, char* value_type, char* name, char* value) {
  struct expression_t* express = (struct expression_t*)malloc(sizeof(struct expression_t));
  check_malloc(express);
  memset(express, 0, sizeof(struct expression_t));
  express->map = 1;
  express->repeated = 1;

  char exp_type[MAX_NAME_SIZE] = {0};
  char big_key_type[MAX_NAME_SIZE] = {0};
  char big_value_type[MAX_NAME_SIZE] = {0};

  strcpy(big_key_type, key_type);
  strcpy(big_value_type, value_type);

  big_key_type[0] = toupper(big_key_type[0]);
  big_value_type[0] = toupper(big_value_type[0]);

  sprintf(exp_type, "Map%s%sEntry", big_key_type, big_value_type);

  strcpy(express->type, exp_type);
  strcpy(express->key_type, key_type);
  strcpy(express->value_type, value_type);
  strcpy(express->name, name);
  strcpy(express->value, value);

  return express;
}

struct message_t* map_expression_to_message(struct expression_t* express) {
  char msg_name[MAX_NAME_SIZE] = {0};
  char big_key_type[MAX_NAME_SIZE] = {0};
  char big_value_type[MAX_NAME_SIZE] = {0};

  strcpy(big_key_type, express->key_type);
  strcpy(big_value_type, express->value_type);

  big_key_type[0] = toupper(big_key_type[0]);
  big_value_type[0] = toupper(big_value_type[0]);

  sprintf(msg_name, "Map%s%sEntry", big_key_type, big_value_type);
  struct message_t* msg = create_message(msg_name);
  check_malloc(msg);

  struct expression_t* key_exp = create_expression(0, express->key_type, "key", "1");
  if (!key_exp) {
    free(msg);
    return NULL;
  }

  struct expression_t* value_exp = create_expression(0, express->value_type, "value", "2");
  if (!value_exp) {
    close_expression(key_exp);
    free(msg);
    return NULL;
  }

  if (insert_expression_to_message(msg, key_exp) != 0) {
    close_expression(key_exp);
    close_expression(value_exp);
    free(msg);
    return NULL;
  }

  if (insert_expression_to_message(msg, value_exp) != 0) {
    close_expression(key_exp);
    close_expression(value_exp);
    free(msg);
    return NULL;
  }

  msg->type = 2;
  return msg;
}

struct enum_t* create_enum(char* em_name) {
  struct enum_t* em = (struct enum_t*)malloc(sizeof(struct enum_t));
  check_malloc(em);
  memset(em, 0, sizeof(struct enum_t));
  strcpy(em->name, em_name);
  return em;
}

void close_enum(struct enum_t* em) {
  for (int i = 0; i < em->item_count; i++) {
    struct enum_item_t* em_i = em->items[i];
    if (em_i) { close_enum_item(em_i); em->items[i] = NULL; }
  }
}

struct message_t* create_message(char* msg_name) {
  struct message_t* msg = (struct message_t*)malloc(sizeof(struct message_t));
  check_malloc(msg);
  memset(msg, 0, sizeof(struct message_t));
  strcpy(msg->name, msg_name);
  return msg;
}

void close_message(struct message_t* msg) {
  if (msg) {
    for (int j = 0; j < msg->exp_count; j++) {
      struct expression_t* express = msg->expressions[j];
      if (express) { close_expression(express); msg->expressions[j] = NULL; }
    }

    for (int j = 0; j < msg->enum_count; j++) {
      struct enum_t* em = msg->enums[j];
      if (em) { close_enum(em); free(em); msg->enums[j] = NULL; }
    }
    if (msg->fp) { fflush(msg->fp); fclose(msg->fp); msg->fp = NULL; }
    if (msg->h_fp) { fflush(msg->h_fp); fclose(msg->h_fp); msg->h_fp = NULL; }
    if (msg->cc_fp) { fflush(msg->cc_fp); fclose(msg->cc_fp); msg->cc_fp = NULL; }
  }/* end if (msg) */
}

struct package_t* create_package(char* pkg_name) {
  struct package_t* package = (struct package_t*)malloc(sizeof(struct package_t));
  check_malloc(package);
  memset(package, 0, sizeof(struct package_t));
  strcpy(package->name, pkg_name);
  return package;
}

void close_package(struct package_t* pkg) {
  if (!pkg) return;

  for (int i = 0; i < pkg->message_count; i++) {
    struct message_t* msg = pkg->messages[i];
    if (msg) { close_message(msg); free(msg); pkg->messages[i] = NULL; }
  }

  close_package(pkg->next);
  pkg->next = NULL;

  if (pkg->fp) {
    fflush(pkg->fp);
    fclose(pkg->fp);
  }

  free(pkg);
}

struct package_t* global_make_package(char* pkg_name) {
  if (!is_curr_package_created) is_curr_package_created = 1;
  if (!gpackage) {
    gpackage = create_package(pkg_name);
    if (!gpackage) return NULL;
    cpackage = gpackage;
  } else {
    struct package_t* pkg = create_package(pkg_name);
    cpackage->next = pkg;
    pkg->prev = cpackage;
    cpackage = pkg;
  }
  return cpackage;
}

struct package_t* global_popkg() {
  if ((!gpackage) || (!cpackage)) return NULL;
  struct package_t* res = cpackage;
  cpackage = cpackage->prev;
  return res;
}

struct package_t* global_package() {
  return gpackage;
}

void reset_yyparse() {
  is_curr_package_created = 0;
}

void free_packages() {
  close_package(gpackage);
}