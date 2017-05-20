cmake_minimum_required(VERSION 3.6)
project(ZACH)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp header.hh function.cc)
add_executable(ZACH ${SOURCE_FILES})