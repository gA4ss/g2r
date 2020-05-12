#!/usr/bin/env bash

# Fail on first error.
set -e

CURR_DIR=$(pwd)

for file in $(find . -name "*.proto")
do
    curr_file=${CURR_DIR}/$file
    $(protoc -I=${CURR_DIR}/ --cpp_out=./  ${curr_file})
done