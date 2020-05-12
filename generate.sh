#!/usr/bin/env bash

# Fail on first error.
# set -e

rm -rf ./message

rm ./error_files.txt
for file in $(find ./protocal -name "*.proto")
do
  ./g2r.out -I ./protocal -o ./message -t ./transorm ${file}
  if [[ $? -ne 0 ]]; then 
    echo ${file} >> error_files.txt
  fi
done
