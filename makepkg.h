#ifndef G2R_MAKEPKG_H
#define G2R_MAKEPKG_H

#include "g2r.h"

int make_package_xml(struct package_t* pkg);
int make_CMakeLists(struct package_t* pkg);
struct cmakelists_t* read_CMakeLists(char* path);
int append_msgfile(struct cmakelists_t* cml, char* msgfile);
int write_CMakeLists(char* path, struct cmakelists_t* cmk, struct package_t* pkg);

#endif