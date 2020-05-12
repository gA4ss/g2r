#!/usr/bin/env bash

# Fail on first error.
set -e

# generate c++ source
source ./generate.sh

SOURCE_FILES=""
for file in $(find . -name "*.cc")
do
    SOURCE_FILES=${SOURCE_FILES}' '${file}
done

# compiling
echo "[+] compiling..."
g++ -std=c++11 -I./ -c ${SOURCE_FILES}

# OBJECT_FILES=$(echo ${SOURCE_FILES} | sed "s/.cc/.o/g")
OBJECT_FILES=$(find . -name "*.o")

# generate target name
TARGET_NAME=$(pwd)
TARGET_NAME=${TARGET_NAME##*/}
TARGET_NAME='lib'${TARGET_NAME}'.a'
echo "[info] target = "$TARGET_NAME

# compressing
echo "[+] compressing..."
ar rcs -o ${TARGET_NAME} ${OBJECT_FILES}

# clean
rm *.o

echo "[+] success"
