%option noyywrap nodefault yylineno

%x COMMENT1
%x COMMENT2
%x EXOPT_MODE
%x SYNTAX_MODE
%x IMPORT_MODE
%x PACKAGE_MODE
%x ENUM_MODE
%x ONEOF_MODE
%x MAP_MODE

RE_HEX      [-+]?0x[0-9A-Fa-f]*
RE_INT      ([0-9]+)
RE_NUMBER   ([-+]?([0-9]*\.?[0-9]+|[0-9]+\.[0-9]*))|({RE_INT})|({RE_HEX})
RE_BOOL     ("true"|"false")
RE_STR      ([^\"\r\t\n]+)
RE_BLANK    ([\r\t ])
RE_SYM      ([a-zA-Z_][a-zA-Z0-9_]*)
RE_PT       ([a-zA-Z_][a-zA-Z0-9_.]*)

%{
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <sys/stat.h>
#include <sys/types.h>

#include "g2r.h"
#include "g2r_config.h"
#include "g2r.tab.h"
#include "makepkg.h"

extern void reset_yyparse();
extern void yyerror(char* s, ...);
extern void gerror(char* s, ...);

char* target_filename = NULL;     /* 当前要处理的文件 */

void unterminated() {
  printf("%s:%d: Unterminated syntax\n", target_filename, yylineno);
}

int set_text(char* t) {
  if (strlen(t) >= MAX_NAME_SIZE) {
    yyerror("symbol '%s' is over symbol limit\r\n");
    return -1;
  }
  strcpy(yylval.text, yytext);
#ifdef ENABLE_YYLEX_DBG
  printf("<flex>[%s]%s\n", t, yytext);
#endif
  return 0;
}

/*
 * 在注释模式中使用，记录上一个模式什么, 在enum模式中
 * 出现注释时，可以进入注释模式，在返回时，返回到注释模式
 * 而非初始模式中 
 */
int prev_mode = 0;

%}

%%
"/*"                          { BEGIN COMMENT1; }
<COMMENT1>"*/"                { BEGIN prev_mode; }
<COMMENT1>([^*]|\n)+|.
<COMMENT1><<EOF>>             { unterminated(); return EOL; }

"//"                          { BEGIN COMMENT2; }
<COMMENT2>"\n"                { BEGIN prev_mode; }
<COMMENT2>.
<COMMENT2><<EOF>>             { return EOL; }

"["                           { BEGIN EXOPT_MODE; }
<EXOPT_MODE>[^\]]*
<EXOPT_MODE>"]"               { BEGIN prev_mode; }
<EXOPT_MODE><<EOF>>           { unterminated(); return EOL; }

<SYNTAX_MODE>\"               { return QUOTATION; }
<SYNTAX_MODE>"="              { return ASSIGN; }
<SYNTAX_MODE>"proto"[0-9]     {
  if (set_text("syntax") != 0) yyterminate();
  return PROTO;
}
<SYNTAX_MODE>";"              { BEGIN INITIAL; /*return SEMICOLON;*/ }
<SYNTAX_MODE>.|\n
<SYNTAX_MODE><<EOF>>          { unterminated(); return EOL; }

<IMPORT_MODE>\"               { return QUOTATION; }
<IMPORT_MODE>[./a-zA-Z_][./a-zA-Z0-9_]* {
  if (set_text("import") != 0) yyterminate();
  return PATH;
}
<IMPORT_MODE>";"              { BEGIN INITIAL; /*return SEMICOLON;*/ }
<IMPORT_MODE>.|\n
<IMPORT_MODE><<EOF>>          { unterminated(); return EOL; }

<PACKAGE_MODE>\"              { return QUOTATION; }
<PACKAGE_MODE>";"             { BEGIN INITIAL; /*return SEMICOLON;*/ }
<PACKAGE_MODE>[a-zA-Z_][.a-zA-Z0-9_]* {
  if (set_text("package") != 0) yyterminate();
  return PACKAGE_NAME;
}
<PACKAGE_MODE>.|\n
<PACKAGE_MODE><<EOF>>         { unterminated(); return EOL; }

<ENUM_MODE>"/*"               { BEGIN COMMENT1; prev_mode = ENUM_MODE; }
<ENUM_MODE>"//"               { BEGIN COMMENT2; prev_mode = ENUM_MODE; }
<ENUM_MODE>"["                { BEGIN EXOPT_MODE; prev_mode = ENUM_MODE; }
<ENUM_MODE>"{"                { return LBRACE; }
<ENUM_MODE>"}"                { BEGIN INITIAL; prev_mode = INITIAL; return RBRACE; }
<ENUM_MODE>"="                { return ASSIGN; }
<ENUM_MODE>";"                { /*return SEMICOLON;*/ }
<ENUM_MODE>{RE_SYM}           {
  if (set_text("enum") != 0) yyterminate();
  return SYMBOL;
}
<ENUM_MODE>{RE_NUMBER}        {
  if (set_text("enum value") != 0) yyterminate();
  return NUMBER;
}
<ENUM_MODE>.|\n
<ENUM_MODE><<EOF>>            { unterminated(); return EOL; }

<ONEOF_MODE>"/*"              { BEGIN COMMENT1; prev_mode = ONEOF_MODE; }
<ONEOF_MODE>"//"              { BEGIN COMMENT2; prev_mode = ONEOF_MODE; }
<ONEOF_MODE>"["               { BEGIN EXOPT_MODE; prev_mode = ONEOF_MODE; }
<ONEOF_MODE>"{"               { return LBRACE; }
<ONEOF_MODE>"}"               { BEGIN INITIAL; prev_mode = INITIAL; return RBRACE; }
<ONEOF_MODE>"="               { return ASSIGN; }
<ONEOF_MODE>";"               { /*return SEMICOLON;*/ }
<ONEOF_MODE>{RE_SYM}          {
  if (set_text("oneof") != 0) yyterminate();
  return SYMBOL;
}
<ONEOF_MODE>{RE_INT}         {
  if (set_text("oneof value") != 0) yyterminate();
  return INTEGER;
}
<ONEOF_MODE>.|\n
<ONEOF_MODE><<EOF>>           { unterminated(); return EOL; }

<MAP_MODE>"/*"                { BEGIN COMMENT1; prev_mode = MAP_MODE; }
<MAP_MODE>"//"                { BEGIN COMMENT2; prev_mode = MAP_MODE; }
<MAP_MODE>"["                 { BEGIN EXOPT_MODE; prev_mode = MAP_MODE; }
<MAP_MODE>"="                 { return ASSIGN; }
<MAP_MODE>";"                 { BEGIN INITIAL; prev_mode = INITIAL; /*return SEMICOLON;*/ }
<MAP_MODE>"<"                 { return LDASH; }
<MAP_MODE>">"                 { return RDASH; }
<MAP_MODE>","                 { return COMMA; }
<MAP_MODE>{RE_SYM}            {
  if (set_text("map") != 0) yyterminate();
  return SYMBOL;
}
<MAP_MODE>{RE_INT}         {
  if (set_text("map value") != 0) yyterminate();
  return INTEGER;
}
<MAP_MODE>.|\n
<MAP_MODE><<EOF>>             { unterminated(); return EOL; }


"="                           { return ASSIGN; }
";"                           { /*return SEMICOLON;*/ }
\"                            { return QUOTATION; }
"{"                           { return LBRACE; }
"}"                           { return RBRACE; }
{RE_INT}                      {
  if (set_text("message") != 0) yyterminate();
  return INTEGER;
}
{RE_SYM}                      {
  if (set_text("message") != 0) yyterminate();
  if (strcmp(yytext, "message") == 0)
    return MESSAGE;
  else if ((strcmp(yytext, "required") == 0) || (strcmp(yytext, "optional") == 0));
  else if (strcmp(yytext, "repeated") == 0)
    return REPEATED;
  else if (strcmp(yytext, "oneof") == 0) {
    BEGIN ONEOF_MODE;
    return ONEOF;
  } else if (strcmp(yytext, "map") == 0) {
    BEGIN MAP_MODE;
    return MAP;
  } else if (strcmp(yytext, "syntax") == 0) {
    BEGIN SYNTAX_MODE;
    return SYNTAX;
  } else if (strcmp(yytext, "import") == 0) {
    BEGIN IMPORT_MODE;
    return IMPORT;
  } else if (strcmp(yytext, "package") == 0) {
    BEGIN PACKAGE_MODE; 
    return PACKAGE;
  } else if (strcmp(yytext, "enum") == 0) {
    BEGIN ENUM_MODE;
    return ENUM;
  } else {
    return SYMBOL;
  }
}
{RE_PT}                       {
  if (set_text("message") != 0) yyterminate();
  return PACKAGE_TYPE;
}
.|\n
<<EOF>>                       { return EOL; }

%%
struct g2r_config gconfig = {0};

void usage() {
  printf("<usage>g2r [option] filename.proto\r\n");
  printf("\t[option]\r\n");
  printf("\t-I <include path>\r\n");
  printf("\t-o <output ros message path>\r\n");
  printf("\t-t <output transform cc source path>\r\n");
  //printf("\t-x <output stdex msg path\r\n");
  printf("logic_yan@hotmail.com\r\n");
}

int handle_arguments(int argc, char **argv) {
  int i = 1;
  while (i < argc-1) {
    if (strcmp("-I", argv[i]) == 0) {
      if (i == argc-2) {
        usage();
        return -1;
      }
      strcpy(gconfig.include_path, argv[i+1]);
    } else if (strcmp("-o", argv[i]) == 0) {
      if (i == argc-2) {
        usage();
        return -1;
      }
      strcpy(gconfig.output_msg_path, argv[i+1]);
    } else if (strcmp("-t", argv[i]) == 0) {
      if (i == argc-2) {
        usage();
        return -1;
      }
      strcpy(gconfig.output_g2r_path, argv[i+1]);
    }
    else if (strcmp("-x", argv[i]) == 0) {
      if (i == argc-2) {
        usage();
        return -1;
      }
      strcpy(gconfig.output_stdex_msg_path, argv[i+1]);
    }
    i++;
  }

  if (i != argc-1) {
    usage();
    return -1;
  }

  return i;
}

void mkdirs(char *muldir) {
  int i,len;
  char str[512];
  strncpy(str, muldir, 512);
  len = strlen(str);
  for(i=0; i<len; i++) {
    if (str[i] == '/') {
      str[i] = '\0';
      if (access(str, 0) != 0) {
        mkdir(str, 0742);
      }
      str[i] = '/';
    }    
  }
  if (len > 0 && access(str, 0) != 0) {
    mkdir(str, 0742);
  }
  return;
}

int is_support_type(char* t) {
  if (strcmp(t, "group") == 0) return 0;
  return 1;
}

char *handle_xxx_dot_yyy(char* gt) {
  static char pkg_field_name[MAX_NAME_SIZE];
  memset(pkg_field_name, 0, MAX_NAME_SIZE);

  char* pstr = strchr(gt, '.');
  if (!pstr) return gt;
  char type_name[MAX_PACKAGE_SPACE][MAX_NAME_SIZE] = {0};

  char buffer[MAX_NAME_SIZE] = {0};
  strcpy(buffer, gt);

  int i = 0;
  char* token = strtok(buffer, ".");
  while (token) {
    strcpy(type_name[i], token);
    token = strtok(NULL, ".");
    i++;
  }

  assert(i >= 2);

  char package_name[MAX_NAME_SIZE] = {0};
  for (int j = 0; j < i-1; j++) {
    strcat(package_name, type_name[j]);
    if (j < i-2) {
      strcat(package_name, "_");
    }
  }

  char* field_name = type_name[i-1];
  sprintf(pkg_field_name, "%s/%s", package_name, field_name);

  return pkg_field_name;
}

char* gtype_2_rtype(char* gt) {
  char* pstr = handle_xxx_dot_yyy(gt);
  if (strcmp(pstr, "fixed32") == 0) return "uint32";
  else if (strcmp(pstr, "sfixed32") == 0) return "int32";
  else if (strcmp(pstr, "fixed64") == 0) return "uint64";
  else if (strcmp(pstr, "sfixed64") == 0) return "int64";
  else if (strcmp(pstr, "sint32") == 0) return "int32";
  else if (strcmp(pstr, "sint64") == 0) return "int64";
  else if (strcmp(pstr, "float") == 0) return "float32";
  else if (strcmp(pstr, "double") == 0) return "float64";
  else if (strcmp(pstr, "bytes") == 0) return "string";
  return pstr;
}

void replace_dot(char* instr, char* outstr) {
  assert(instr && outstr);
  int i = 0;
  while (*instr != '\0') {
    if ((i == 0) && (*instr == '.')) { i++; continue; }
    if (*instr == '.') *outstr = '/';
    else *outstr = *instr;
    instr++; outstr++;
    i++;
  }
  *outstr = '\0';
}

char* make_full_include_file(char* path) {
  static char buffer[MAX_BUFFER_SIZE];
  memset(buffer, 0, MAX_BUFFER_SIZE);
  char* pstr = path;
  /* FIXME: 这里还应该判断长度是否为1 */
  if (*pstr == '/') pstr++;  // 跳过首字符的/号,因为在include_path中默认末尾有/号
  strcpy(buffer, gconfig.include_path);
  strcat(buffer, pstr);
  return buffer;
}

int make_g2r_h_file(struct package_t* pkg, struct message_t* msg) {
  assert(pkg && msg);

  FILE* fp = msg->h_fp;
  assert(fp);

  fprintf(fp, "#ifndef G2R_%s_H\r\n", pkg->name);
  fprintf(fp, "#define G2R_%s_H\r\n", pkg->name);

  fprintf(fp, "\r\n");

#if 0
  // include文件
  char include_file[MAX_BUFFER_SIZE] = {0};
  for (int i = 0; i < pkg->header.ifile_count; i++) {
    replace_dot(pkg->header.import_files[i], include_file);
    // 查找最右边的'.'替换.proto为.h
    char* p = strrchr(include_file, '/');
    if (p) strcpy(p, "_pb.h");
    fprintf(fp, "#include \"%s\"\r\n", include_file);
  }
#endif

  char protocal_include_path[MAX_BUFFER_SIZE] = {0};
  for (int i = 0; i < pkg->header.package_name_count; i++) {
    /*
     * 这里专门为apollo而设定
     */
    if ((i == 0) && (!strcmp("apollo", pkg->header.package_name[i]))) continue;
    strcat(protocal_include_path, pkg->header.package_name[i]);
    strcat(protocal_include_path, "/");
  }

  char only_name[MAX_BUFFER_SIZE] = {0};
  char* ps = strrchr(target_filename, '/');
  if (!ps) {
    gerror("not handle filename = %s\r\n", target_filename);
    return -1;
  }
  strcpy(only_name, ps+1);

  char* pe = strrchr(only_name, '.');
  if (pe) {
    strcpy(pe, "_pb.h");
  } else {
    strcat(only_name, "_pb.h");
  }

  sprintf(protocal_include_path, "%s%s", protocal_include_path, only_name);
  fprintf(fp, "#include <%s>\r\n", protocal_include_path);

  //char* pkg_name = pkg->header.package_name[pkg->header.package_name_count-1];
  char* pkg_name = pkg->name;
  fprintf(fp, "#include <%s/%s.h>\r\n", pkg_name, msg->name);

  //
  // namespace
  //
  char gprotoc_namespace[MAX_NAME_SIZE] = {0};
  for (int i = 0; i < pkg->header.package_name_count; i++) {
    strcat(gprotoc_namespace, pkg->header.package_name[i]);
    strcat(gprotoc_namespace, "::");
  }

  char ros_namespace[MAX_NAME_SIZE] = {0};
  pkg_name = pkg->header.package_name[pkg->header.package_name_count-1];
  sprintf(ros_namespace, "%s::%s::", pkg_name, msg->name);

  fprintf(fp, "\r\n\r\n");

  // 函数原型
  fprintf(fp, "void g2r_%s_%s(%s%s& arg_gprotoc, %s%s& arg_rosmsg);\r\n", 
    pkg->name, msg->name, gprotoc_namespace, msg->name, ros_namespace, msg->name);
  fprintf(fp, "void r2g_%s_%s(%s%s& arg_rosmsg, %s%s& arg_gprotoc);\r\n",
    pkg->name, msg->name, ros_namespace, msg->name, gprotoc_namespace, msg->name);

  fprintf(fp, "\r\n");

  fprintf(fp, "#endif\r\n");
  return 0;
}

void write_g2r_cc_repeated(FILE* fp, char* name, int r2g) {
  fprintf(fp, "\tfor (size_t i = 0; i < arg_gprotoc.size(); i++) {\r\n");
  if (r2g)
    fprintf(fp, "\t\targ_gprotoc.%s[i] = arg_rosmsg.%s[i];\r\n", name, name);
  else
    fprintf(fp, "\t\targ_rosmsg.%s[i] = arg_gprotoc.%s[i];\r\n", name, name);
  fprintf(fp, "\t}\r\n");
}

void write_r2g_cc_map(FILE* fp, char* gproto_type, char* rosmsg_type, char* name, int r2g) {
  char gproto_varname[MAX_BUFFER_SIZE] = {0};
  char rosmsg_varname[MAX_BUFFER_SIZE] = {0};
  sprintf(gproto_varname, "arg_gprotoc.%s", name);
  sprintf(rosmsg_varname, "arg_rosmsg.%s", name);

  if (r2g) {
    fprintf(fp, "\tfor (int i = 0; i < %s.size(); i++) {\r\n", rosmsg_varname);
    fprintf(fp, "\t\t%s[%s[i].key] = %s[i].value;\r\n", gproto_varname, rosmsg_varname, rosmsg_varname);
    fprintf(fp, "\t}\r\n");
  } else {
    char gproto_type_iter[MAX_BUFFER_SIZE] = {0};
    sprintf(gproto_type_iter, "%s::iterator", gproto_type);
    fprintf(fp, "\t%s gproto_iter = %s.begin();\r\n", gproto_type_iter, gproto_varname);
    fprintf(fp, "\r\n");
    fprintf(fp, "\tint i = 0;\r\n");
    fprintf(fp, "\tfor (; gproto_iter != %s.end(); gproto_iter++) {\r\n", gproto_varname);
    fprintf(fp, "\t\t%s[i].key = gproto_iter->key();\r\n", rosmsg_varname);
    fprintf(fp, "\t\t%s[i].value = gproto_iter->value()->second;\r\n", rosmsg_varname);
    fprintf(fp, "\t\ti++;\r\n");
    fprintf(fp, "\t}\r\n");
  }
}

int make_g2r_cc_file(struct package_t* pkg, struct message_t* msg) {
  assert(pkg && msg);
  
  FILE* fp = msg->cc_fp;
  assert(fp);

  fprintf(fp, "#include \"g2r_%s.h\"\r\n", msg->name);
  fprintf(fp, "\r\n");

  //
  // namespace
  //
  char gprotoc_namespace[MAX_BUFFER_SIZE] = {0};
  for (int i = 0; i < pkg->header.package_name_count; i++) {
    strcat(gprotoc_namespace, pkg->header.package_name[i]);
    strcat(gprotoc_namespace, "::");
  }

  char* pkg_name = pkg->header.package_name[pkg->header.package_name_count-1];
  char ros_namespace[MAX_BUFFER_SIZE] = {0};
  sprintf(ros_namespace, "%s::%s::", pkg_name, msg->name);

  char gproto_varname[MAX_BUFFER_SIZE] = {0};
  char rosmsg_varname[MAX_BUFFER_SIZE] = {0};
  sprintf(gproto_varname, "%s%s", gprotoc_namespace, msg->name);
  sprintf(rosmsg_varname, "%s%s", ros_namespace, msg->name);

  char gproto_express_type[MAX_BUFFER_SIZE] = {0};
  char rosmsg_express_type[MAX_BUFFER_SIZE] = {0};

  fprintf(fp, "void g2r_%s_%s(%s& arg_gprotoc, %s& arg_rosmsg) {\r\n",
    pkg->name, msg->name, gproto_varname, rosmsg_varname);
  for (int i = 0; i < msg->exp_count; i++) {
    struct expression_t* express = msg->expressions[i];
    if (!express) return -1;
  
    if (express->map) {
      sprintf(gproto_express_type, "%s%s", gprotoc_namespace, express->type);
      sprintf(rosmsg_express_type, "%s%s", ros_namespace, express->type);
      write_r2g_cc_map(fp, gproto_express_type, rosmsg_express_type, express->name, 0);
    } else if (express->repeated) {
      write_g2r_cc_repeated(fp, express->name, 0);
    } else {
      fprintf(fp, "\targ_rosmsg.%s = arg_gprotoc.%s();\r\n", express->name, express->name);
    }
  }
  fprintf(fp, "}\r\n");

  fprintf(fp, "\r\n");

  fprintf(fp, "void r2g_%s_%s(%s& arg_rosmsg, %s& arg_gprotoc) {\r\n",
    pkg->name, msg->name, rosmsg_varname, gproto_varname);
  for (int i = 0; i < msg->exp_count; i++) {
    struct expression_t* express = msg->expressions[i];
    if (!express) return -1;

    if (express->map) {
      sprintf(gproto_express_type, "%s%s", gprotoc_namespace, express->type);
      sprintf(rosmsg_express_type, "%s%s", ros_namespace, express->type);
      write_r2g_cc_map(fp, gproto_express_type, rosmsg_express_type, express->name, 1);
    } else if (express->repeated) {
      write_g2r_cc_repeated(fp, express->name, 1);
    } else {
      fprintf(fp, "\targ_gprotoc.set_%s(arg_rosmsg.%s);\r\n", express->name, express->name);
    }
  }
  fprintf(fp, "}\r\n");

  fprintf(fp, "\r\n");

  return 0;
}

int make_g2r_h_cc(char* output_dir, struct package_t* pkg, struct message_t* msg) {
  // 开始输出h/cc文件
  char path[MAX_BUFFER_SIZE] = {0};
  strcpy(path, output_dir);
  if (path[strlen(path)-1] != '/')
    strcat(path, "/");
  strcat(path, "g2r_");
  strcat(path, msg->name);

  char h_path[MAX_BUFFER_SIZE] = {0};
  strcpy(h_path, path);
  strcat(h_path, ".h");

  msg->h_fp = fopen(h_path, "w");
  if (msg->h_fp == NULL) {
    gerror("create \'%s\' failed\r\n", h_path);
    return -1;
  }

  if (make_g2r_h_file(pkg, msg) != 0) {
    return -1;
  }
  
  char cc_path[MAX_BUFFER_SIZE] = {0};
  strcpy(cc_path, path);
  strcat(cc_path, ".cc");

  msg->cc_fp = fopen(cc_path, "w");
  if (msg->cc_fp == NULL) {
    gerror("create \'%s\' failed\r\n", cc_path);
    return -1;
  }

  if (make_g2r_cc_file(pkg, msg) != 0) {
    return -1;
  }

  return 0;
}

char* genum_text_rostype(char* text) {
  // FIXME: 这里也没做严格的匹配判断
  if (strspn(text, "-0123456789.") == strlen(text)) {
    if (strspn(text, ".") == 1) return "float64"; // ros中浮点数没有正负号
    // 剩下的就是整数
    if (text[0] == '-') return "int64";
    else return "uint64";
  }

  // FIXME: 没有字符串类型的枚举值
  printf("[warning]it may be hex number\r\n");
  return "int64";
}

int make_ros_message(char* cc_dir, char* msg_dir, struct package_t* pkg, struct message_t* msg) {
  char msg_path[256] = {0};
  strcpy(msg_path, msg_dir);
  sprintf(msg_path, "%s%s.msg", msg_path, msg->name);

  msg->fp = fopen(msg_path, "w");
  if (msg->fp == NULL) {
    gerror("create \'%s\' failed\r\n", msg_path);
    return -1;
  }
  fprintf(msg->fp, "# DO NOT EDIT, GENERATE BY g2r\r\n");

  if (msg->exp_count) {
    char ros_type[MAX_NAME_SIZE];
    for (int i = 0; i < msg->exp_count; i++) {
      struct expression_t* express = msg->expressions[i];
      if (!express) return -1;

      /* 这里需要做gprotoc类型到ros msg的类型转换 */
      if (!is_support_type(express->type)) {
        gerror("not support type = %s in %s\r\n", express->type, msg_path);
        return -1;
      }
      char* rt = gtype_2_rtype(express->type);
      memset(ros_type, 0, MAX_NAME_SIZE);

      //if (express->map) sprintf(ros_type, "stdex_msg/%s", rt);
      //else strcpy(ros_type, rt);
      strcpy(ros_type, rt);

      if (express->repeated == 0)
          fprintf(msg->fp, "%s %s\r\n", ros_type, express->name);
      else
          fprintf(msg->fp, "%s[] %s\r\n", ros_type, express->name);
    }
    fprintf(msg->fp, "\r\n");
  }

  if (msg->enum_count) {
    for (int i = 0; i < msg->enum_count; i++) {
      struct enum_t* em = msg->enums[i];
      if (!em) return -1;
      for (int j = 0; j < em->item_count; j++) {
        struct enum_item_t* em_item = em->items[j];
        if (!em_item) return -1;
        char* etype = genum_text_rostype(em_item->value);
        if (strcmp("string", etype) == 0)
          fprintf(msg->fp, "%s %s = \"%s\"\r\n", etype, em_item->name, em_item->value);
        else
          fprintf(msg->fp, "%s %s = %s\r\n", etype, em_item->name, em_item->value);
      }
    }
    fprintf(msg->fp, "\r\n");
  }

  // 只有消息本身才生成对应的c++转换类
  if (!msg->type) {
    if (make_g2r_h_cc(cc_dir, pkg, msg) != 0)
      return -1;
  }

  return 0;
}

void show_messages(struct package_t* pkg) {
  printf("<package>%s has '%d' messages\r\n", pkg->name, pkg->message_count);
  for (int i = 0; i < pkg->message_count; i++) {
    printf("<message %d>%s\r\n", pkg->messages[i]->type, pkg->messages[i]->name);
  }
}

int make_ros_package(struct package_t* pkg) {
  if (!pkg) return -1;

  char cc_path[MAX_BUFFER_SIZE] = {0};
  char msg_dir[MAX_BUFFER_SIZE] = {0};
  char stdex_dir[MAX_BUFFER_SIZE] = {0};

  strcpy(cc_path, gconfig.output_g2r_path);
  strcpy(msg_dir, gconfig.output_msg_path);
  strcpy(stdex_dir, gconfig.output_stdex_msg_path);

  for (int i = 0; i < pkg->header.package_name_count; i++) {
    /*
     * 这里组成msg输出的目录,apollo专属
     */
    if ((i == 0) && (strcmp(pkg->header.package_name[i], "apollo") == 0)) {
      strcat(msg_dir, pkg->header.package_name[i]);
      strcat(msg_dir, "/");

      strcat(cc_path, pkg->header.package_name[i]);
      strcat(cc_path, "/");
    } else {
      // 组成目录名
      strcat(msg_dir, pkg->header.package_name[i]);
      strcat(cc_path, pkg->header.package_name[i]);

      if (i < pkg->header.package_name_count-1) {
        strcat(msg_dir, "_");
        strcat(cc_path, "_");
      } else {
        strcat(msg_dir, "/");
        strcat(cc_path, "/");
      }
    }
  }

  strcat(msg_dir, "msg/");
  strcat(stdex_dir, "stdex_msg/");

  mkdirs(msg_dir);
  //mkdirs(stdex_dir);
  mkdirs(cc_path);

  /*
   * 输出每个消息到rosmsg文件
   */
  for (int i = 0; i < pkg->message_count; i++) {
    struct message_t* msg = pkg->messages[i];
    char* out_msg = NULL;

    //if (msg->type == 2) out_msg = stdex_dir;
    //else out_msg = msg_dir;
    out_msg = msg_dir;

    char ms = ' ';
    if (msg->type == 0) ms = 'M';
    else if (msg->type == 1) ms = 'E';
    else ms = 'D';

    printf("parsing message %s [%c]\r\n", msg->name, ms);
    if (make_ros_message(cc_path, out_msg, pkg, msg) != 0) {
      printf("error\r\n");
      return -1;
    }
  }
  printf("\r\n");

  return 0;
}

int main(int argc, char **argv) {

  /* 命令行配置 */
  if (argc < 2) {
    usage();
    return -1;
  }

  int i = 0;
  if ((i = handle_arguments(argc, argv)) < 0) {
    usage();
    return -1;
  }

  target_filename = argv[i];
  printf("========================================\r\n");
  printf("target = %s\r\n", target_filename);
  if (strlen(gconfig.include_path)) {
    if (gconfig.include_path[strlen(gconfig.include_path)-1] != '/')
      strcat(gconfig.include_path, "/");
    printf("include_path = %s\r\n", gconfig.include_path);
  } else
    strcpy(gconfig.include_path, "./");
  
  if (strlen(gconfig.output_msg_path)) {
    if (gconfig.output_msg_path[strlen(gconfig.output_msg_path)-1] != '/')
      strcat(gconfig.output_msg_path, "/");
    printf("output_msg_path = %s\r\n", gconfig.output_msg_path);
  } else
    strcpy(gconfig.output_msg_path, "./");

  if (strlen(gconfig.output_g2r_path)) {
    if (gconfig.output_g2r_path[strlen(gconfig.output_g2r_path)-1] != '/')
      strcat(gconfig.output_g2r_path, "/");
    printf("output_g2r_path = %s\r\n", gconfig.output_g2r_path);
  } else
    strcpy(gconfig.output_g2r_path, "./");

  if (strlen(gconfig.output_stdex_msg_path)) {
    if (gconfig.output_stdex_msg_path[strlen(gconfig.output_stdex_msg_path)-1] != '/')
      strcat(gconfig.output_stdex_msg_path, "/");
    printf("output_stdex_msg_path = %s\r\n", gconfig.output_stdex_msg_path);
  } else
    strcpy(gconfig.output_stdex_msg_path, "./");
  printf("========================================\r\n");
  if (!(yyin = fopen(target_filename, "r"))) {
    gerror("can not open file: %s\r\n", target_filename);
    return -1;
  }

  printf("parsing main file...\r\n\r\n");
  int ret = yyparse();
  if (ret) {
    gerror("yyparse return = %d\r\n", ret);
    return ret;
  }

  //show_messages(global_package());

  make_ros_package(global_package());

  printf("parsing include files...\r\n");
  for (int i = 0; i < global_package()->header.ifile_count; i++) {
    char* path = make_full_include_file(global_package()->header.import_files[i]);
    printf("[import file]%s  parsing...\r\n", path);

    FILE* fp = fopen(path, "r");
    if (fp == NULL) {
      gerror("open \'%s\' failed\r\n", path);
      return -1;
    }

    yyrestart(fp);
    yylineno = 0;
    reset_yyparse();
    if (yyparse() != 0)
      return -1;
  }
  printf("total has %d import file\r\n", global_package()->header.ifile_count);

  printf("writing package.xml\r\n");
  int ret1 = make_package_xml(global_package());

  printf("writing CMakeLists.txt\r\n");
  int ret2 = make_CMakeLists(global_package());

  if (global_package()) {
    free_packages();
  }

  printf("\r\n");

  if (ret1 == -1)
    printf("write package.xml failed\r\n");

  if (ret2 == -1)
    printf("write CMakeLists.txt failed\r\n");

  printf("^_^ success\r\n");
  return 0;
}