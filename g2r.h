#ifndef G2R_H
#define G2R_H

#include <stdio.h>

//#define ENABLE_YYLEX_DBG      1
//#define ENABLE_YYPARSE_DBG    1


#define MAX_NAME_SIZE         64
#define MAX_BUFFER_SIZE       128

struct enum_item_t {
  char name[MAX_NAME_SIZE];
  char value[MAX_BUFFER_SIZE];
};

#define MAX_ITEM_IM_ENUM        128
struct enum_t {
  char name[MAX_NAME_SIZE];

  struct enum_item_t* items[MAX_ITEM_IM_ENUM];
  int item_count;
};

struct expression_t {
  int repeated;                 // 是否是重复类型，如果是则对应ros msg中的"[]"标签
  int map;                      // 是否是map类型

  //
  // for map
  //
  char key_type[MAX_NAME_SIZE];
  char value_type[MAX_NAME_SIZE];

  char type[MAX_NAME_SIZE];     // 这里有可能是包类型 xxx.yyy
  char name[MAX_NAME_SIZE];
  char value[MAX_BUFFER_SIZE];
};

/*
 * 在google buffer protocal中message中可以定义枚举体
 * 在文件中也可以定义枚举体
 *
 * 在ros msg中,一个msg文件对应gprotoc中的一个message
 * 如果遇到在文件中的定义的枚举体,那么也将其视为一个message
 * 建立一个".msg"的文件其中文件名就是枚举体的名称
 */
#define MAX_ENUM_IN_MESSAGE         64
#define MAX_EXP_IN_MESSAGE          128
struct message_t {
  char name[MAX_NAME_SIZE];                 // 消息的名称,作为ros的文件名使用

  /*
   * 0: 消息体, 1: 枚举体, 2: map
   * 当是枚举体的时候，name字段与enums[0].name相同
   * enum_count为1
   */
  int type;

  /* 当前消息的表达式 */
  struct expression_t* expressions[MAX_EXP_IN_MESSAGE];
  int exp_count;

  /* 在消息内定义的枚举体 */
  struct enum_t* enums[MAX_ENUM_IN_MESSAGE];
  int enum_count;

  FILE* fp;
  FILE* h_fp;
  FILE* cc_fp;
};

#define MAX_IMPORT_FILES          32
#define MAX_PACKAGE_SPACE         32
struct header_t {
  char syntax[MAX_NAME_SIZE];

  char import_files[MAX_IMPORT_FILES][MAX_BUFFER_SIZE];
  int ifile_count;

  char package_name[MAX_PACKAGE_SPACE][MAX_NAME_SIZE];
  int package_name_count;
};

#define MAX_MESSAGE_IN_PACKAGE        128
struct package_t {
  struct header_t header;
  char name[MAX_NAME_SIZE];

  struct message_t* messages[MAX_MESSAGE_IN_PACKAGE];
  int message_count;

  FILE* fp;           // package.xml的文件句柄

  struct package_t* next;
  struct package_t* prev;
};

struct package_t* global_package();
void free_packages();

#define MAX_LINE_SIZE           512
#define MAX_ROSMSG_FILES        256
struct cmakelists_t {
  char msg_files[MAX_ROSMSG_FILES][MAX_NAME_SIZE];
  int msg_files_count;
};

#endif