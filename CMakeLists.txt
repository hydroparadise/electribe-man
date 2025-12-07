cmake_minimum_required(VERSION 4.0)
project(electribe_man C)

set(CMAKE_C_STANDARD 11)

include_directories(src)

add_executable(
        electribe_man
        src/emxread.c
        src/util.c
        src/common.h
        src/emx.c
)
