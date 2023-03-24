cmake_minimum_required(VERSION 3.25)
project(splitStringToArray C)

set(CMAKE_C_STANDARD 99)

add_executable(splitStringToArray main.c splitstringtoarray.c splitstringtoarray.h)
