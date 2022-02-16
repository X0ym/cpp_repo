cmake_minimum_required(VERSION 3.21)
project(cpp_repo)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_executable(cpp_repo
        src/main.cpp
        src/main.h)
