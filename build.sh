#!/bin/bash

rm bin -rf
mkdir bin
gcc -o ./bin/emxread ./src/emxread.c ./src/util.c ./src/emx.c



