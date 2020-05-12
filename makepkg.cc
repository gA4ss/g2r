#include "makepkg.h"
#include "g2r.h"
#include "g2r_config.h"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#include <tinyxml2/tinyxml2.h>

extern void gerror(char* s, ...);
extern struct g2r_config gconfig;

static char package_name_list[MAX_PACKAGE_SPACE][MAX_NAME_SIZE] = {0};

// -1 表示找到。正数表示索引
int found_exist_package_name(const char* pkg_name) {
  int i = 0;
  while (strlen(package_name_list[i])) {
    if (!strcmp(pkg_name, package_name_list[i])) {
      return -1;
    }
    i++;
  }
  return i;
}

int read_package_xml(char* xmlPath) {
  tinyxml2::XMLDocument doc;
  if (doc.LoadFile(xmlPath)!=0) {
    return -1;
  }

  tinyxml2::XMLElement* root=doc.RootElement(); 
  tinyxml2::XMLElement* build_depends = root->FirstChildElement("build_depend"); 
  while (build_depends != NULL) {
    const char* text = build_depends->GetText();
    int index = 0;

    if ((index = found_exist_package_name(text)) != -1) {
      if (index == MAX_PACKAGE_SPACE) {
        gerror("it is over package count limit\r\n");
        return -1;
      }
      strcpy(package_name_list[index], text);
    }
    build_depends = build_depends->NextSiblingElement();
  }
  return doc.SaveFile(xmlPath);
}

int create_package_xml(char* xmlPath, struct package_t* pkg) {
  assert(pkg);

  FILE* fp = fopen(xmlPath, "w");
  if (fp == NULL) {
    gerror("create \'%s\' failed\r\n", xmlPath);
    return -1;
  };
  fprintf(fp, "<package format=\"2\">\r\n");
  fprintf(fp, "\t<name>%s</name>\r\n", pkg->name);
  fprintf(fp, "\t<version>1.0.0</version>\r\n");
  fprintf(fp, "\t<description>google buffer protocal to ros msg for %s</description>\r\n", pkg->name);
  fprintf(fp, "\t<maintainer email=\"logic_yan@hotmail.com\">devilogic</maintainer>\r\n");
  fprintf(fp, "\t<license>Licensed under the Apache License, Version 2.0 </license>\r\n");
  fprintf(fp, "\t<buildtool_depend>catkin</buildtool_depend>\r\n");
  //fprintf(fp, "\t<build_depend>stdex_msg</build_depend>\r\n");
  //fprintf(fp, "\t<exec_depend>stdex_msg</exec_depend>\r\n");
  struct package_t* depend_pkg = pkg->next;
  char depend_name[64];
  int index = 0;

  fprintf(fp, "\t<build_depend>message_runtime</build_depend>\r\n");
  fprintf(fp, "\t<exec_depend>message_runtime</exec_depend>\r\n");

  fprintf(fp, "\t<build_depend>message_generation</build_depend>\r\n");
  fprintf(fp, "\t<exec_depend>message_generation</exec_depend>\r\n");

  while (depend_pkg) {
    if (!strcmp(depend_pkg->name, pkg->name)) {
      depend_pkg = depend_pkg->next;
      continue;
    }

    memset(depend_name, 0, 64);
    sprintf(depend_name, "%s", depend_pkg->name);

    if ((index = found_exist_package_name(depend_name)) != -1) {
      if (index == MAX_PACKAGE_SPACE) {
        gerror("it is over package count limit\r\n");
        return -1;
      }
      strcpy(package_name_list[index], depend_name);

      fprintf(fp, "\t<build_depend>%s</build_depend>\r\n", depend_name);
      fprintf(fp, "\t<exec_depend>%s</exec_depend>\r\n", depend_name);
    }
    depend_pkg = depend_pkg->next;
  }

  fprintf(fp, "</package>\r\n");
  
  fflush(fp);
  fclose(fp);
  
  return 0;
}

int add_depend_to_package_xml(char* xmlPath, struct package_t* pkg) {
  tinyxml2::XMLDocument doc;
  if (doc.LoadFile(xmlPath)!=0) {
    gerror("read %s failed in add depends\r\n", xmlPath); 
    return -1;
  }

  tinyxml2::XMLElement* root = doc.RootElement();
  tinyxml2::XMLElement* build_depend_node = root->FirstChildElement("build_depend");
  tinyxml2::XMLElement* exec_depend_node = root->FirstChildElement("exec_depend");

  int index = 0;
  char depend_name[64];
  struct package_t* depend_pkg = pkg->next;

  while (depend_pkg) {
    if (!strcmp(depend_pkg->name, pkg->name)) {
      depend_pkg = depend_pkg->next;
      continue;
    }

    memset(depend_name, 0, 64);
    sprintf(depend_name, "%s", depend_pkg->name);

    if ((index = found_exist_package_name(depend_name)) != -1) {
      if (index == MAX_PACKAGE_SPACE) {
        gerror("it is over package count limit\r\n");
        return -1;
      }
      strcpy(package_name_list[index], depend_name);

      //
      // add new depend to xml
      //
      tinyxml2::XMLElement* bd = doc.NewElement("build_depend");
      tinyxml2::XMLElement* ed = doc.NewElement("exec_depend");

      bd->InsertFirstChild(doc.NewText(depend_name));
      ed->InsertFirstChild(doc.NewText(depend_name));
      if (build_depend_node)
        root->InsertAfterChild(build_depend_node, bd);
      else
        root->InsertEndChild(bd);

      if (exec_depend_node)
        root->InsertAfterChild(exec_depend_node, ed);
      else
        root->InsertEndChild(ed);
    }

    depend_pkg = depend_pkg->next;
  }
  return doc.SaveFile(xmlPath);
}

int make_package_xml(struct package_t* pkg) {
  char package_xml_path[MAX_BUFFER_SIZE] = {0};
  strcpy(package_xml_path, gconfig.output_msg_path);
  if (package_xml_path[strlen(package_xml_path)-1] != '/')
    strcat(package_xml_path, "/");

  for (int i = 0; i < pkg->header.package_name_count; i++) {
    /*
     * 这里组成msg输出的目录,apollo专属
     */
    if ((i == 0) && (strcmp(pkg->header.package_name[i], "apollo") == 0)) {
      strcat(package_xml_path, pkg->header.package_name[i]);
      strcat(package_xml_path, "/");
    } else {
      // 组成目录名
      strcat(package_xml_path, pkg->header.package_name[i]);
      if (i < pkg->header.package_name_count-1) {
        strcat(package_xml_path, "_");
      } else {
        strcat(package_xml_path, "/");
      }
    }
  }
  strcat(package_xml_path, "package.xml");

  if (read_package_xml(package_xml_path) == -1) {
    if (create_package_xml(package_xml_path, pkg) == -1)
      return -1;

    if (read_package_xml(package_xml_path) == -1)
      return -1;
  }

  return add_depend_to_package_xml(package_xml_path, pkg);
}

int make_CMakeLists(struct package_t* pkg) {
  assert(pkg);

  char path[MAX_BUFFER_SIZE] = {0};
  strcpy(path, gconfig.output_msg_path);

  for (int i = 0; i < pkg->header.package_name_count; i++) {
    /*
     * 这里组成msg输出的目录,apollo专属
     */
    if ((i == 0) && (strcmp(pkg->header.package_name[i], "apollo") == 0)) {
      strcat(path, pkg->header.package_name[i]);
      strcat(path, "/");
    } else {
      // 组成目录名
      strcat(path, pkg->header.package_name[i]);
      if (i < pkg->header.package_name_count-1) {
        strcat(path, "_");
      } else {
        strcat(path, "/");
      }
    }
  }
  strcat(path, "CMakeLists.txt");

  // 首先确定文件是否存在
  if (access(path, 0) == 0) {
    struct cmakelists_t* cmk = read_CMakeLists(path);
    if (!cmk) return -1;
    return write_CMakeLists(path, cmk, pkg);
  }

  FILE* fp = fopen(path, "w");
  if (fp == NULL) {
    gerror("create \'%s\' failed\r\n", path);
    return -1;
  }

  fprintf(fp, "cmake_minimum_required(VERSION 2.8.3)\r\n");
  fprintf(fp, "project(%s)\r\n", pkg->name);
  fprintf(fp, "find_package(catkin REQUIRED COMPONENTS message_generation\r\n");
  int i = 0;
  while (strlen(package_name_list[i])) {
    fprintf(fp, "\t%s\r\n", package_name_list[i]);
    i++;
  }
  fprintf(fp, ")\r\n");

  fprintf(fp, "generate_messages(DEPENDENCIES)\r\n");
  fprintf(fp, "catkin_package(CATKIN_DEPENDS message_runtime)\r\n");

  fprintf(fp, "add_message_files(\r\n");
  fprintf(fp, "\tDIRECTORY msg\r\n");
  fprintf(fp, "\tFILES\r\n");
  for (int i = 0; i < pkg->message_count; i++) {
    fprintf(fp, "\t%s.msg\r\n", pkg->messages[i]->name);
  }
  fprintf(fp, ")\r\n");

  fflush(fp);
  fclose(fp);

  return 0;
}

int read_line(FILE* fp, char* buffer, int buffer_size) {
  assert(fp && buffer);
  assert(buffer_size > 0);

  memset(buffer, 0, buffer_size);

  char ch = 0;
  int count = 0;
  while(!feof(fp)) {
    if (count >= buffer_size) {
      gerror("line size is longer then buffer size\r\n");
      return -1;
    }

    ch = fgetc(fp);
    if (ch == '\r') continue;
    if (ch == '\n') return count;
    
    *(buffer + count) = ch;
    count++;
  }

  return count;
}

int parse_add_message_files(struct cmakelists_t* cmk, char* line) {
  char* token = strtok(line, "\t\r\n ");
  while (token) {
    //printf("parse token = %s\r\n", token);
    if (!strcmp(token, "(")) {
      token = strtok(NULL, "\t\r\n ");
      continue;
    }
    if (!strcmp(token, ")")) return 1;
    if (append_msgfile(cmk, token) == -1) return -1;
    token = strtok(NULL, "\t\r\n ");
  }
  return 0;
}

struct cmakelists_t* read_CMakeLists(char* path) {
  FILE* fp = fopen(path, "r");
  if (fp == NULL) {
    gerror("open \'%s\' failed\r\n", path);
    return NULL;
  }

  struct cmakelists_t* cmk = (struct cmakelists_t*)malloc(sizeof(struct cmakelists_t));
  if (!cmk) {
    gerror("malloc cmakelists_t memory failed\r\n");
    return NULL;
  }
  memset(cmk, 0, sizeof(struct cmakelists_t));

  int in_add_message_files = 0;
  int line_count = 0;
  char line[MAX_LINE_SIZE] = {0};
  char ch = 0;
  while(!feof(fp)) {
    if (read_line(fp, line, MAX_LINE_SIZE) == -1) {
      fclose(fp);
      free(cmk);
      return NULL;
    }

    if (!in_add_message_files) {
      if (!strncmp(line, "add_message_files", strlen("add_message_files"))) {
        if (!parse_add_message_files(cmk, &line[0]+strlen("add_message_files"))) {
          in_add_message_files = 1;
        }
      }
    } else {
      //
      // 在 add_message_files模式下，分析每行的内容直到遇到)号
      //
      //printf("in add_message_files\r\n");
      if (parse_add_message_files(cmk, line)) {
        in_add_message_files = 0; // 退出add_message_files模式
      }
    }
    line_count++;
  }
  fclose(fp);
  return cmk;
}

int append_msgfile(struct cmakelists_t* cmk, char* msgfile) {
  assert(cmk && msgfile);

  if (cmk->msg_files_count == MAX_ROSMSG_FILES) {
    gerror("ros msg files is over limit\r\n");
    return -1;
  }
  strcpy(cmk->msg_files[cmk->msg_files_count++], msgfile);
  return 0;
}

int write_CMakeLists(char* path, struct cmakelists_t* cmk, struct package_t* pkg) {
  assert(cmk && path && pkg);

  FILE* fp = fopen(path, "w");
  if (fp == NULL) {
    gerror("create \'%s\' failed\r\n", path);
    return -1;
  }

  fprintf(fp, "# DO NOT EDIT, GENERATE BY g2r\r\n");
  fprintf(fp, "cmake_minimum_required(VERSION 2.8.3)\r\n");
  fprintf(fp, "project(%s)\r\n", pkg->name);
  fprintf(fp, "find_package(catkin REQUIRED COMPONENTS\r\n");
  int i = 0;
  while (strlen(package_name_list[i])) {
    fprintf(fp, "\t%s\r\n", package_name_list[i]);
    i++;
  }
  fprintf(fp, ")\r\n");

  fprintf(fp, "generate_messages(DEPENDENCIES)\r\n");
  fprintf(fp, "catkin_package(CATKIN_DEPENDS message_runtime)\r\n");

  char msgfile[MAX_NAME_SIZE] = {0};
  for (int i = 0; i < pkg->message_count; i++) {
    //memset(msgfile, 0, MAX_NAME_SIZE);
    sprintf(msgfile, "%s.msg", pkg->messages[i]->name);
    if (append_msgfile(cmk, msgfile) == -1) {
      free(cmk);
      fclose(fp);
      return -1;
    }
  }

  fprintf(fp, "add_message_files(\r\n");
  for (int i = 0; i < cmk->msg_files_count; i++) {
    fprintf(fp, "\t%s\r\n", cmk->msg_files[i]);
  }
  fprintf(fp, ")\r\n");

  free(cmk);
  fflush(fp);
  fclose(fp);

  return 0;
}