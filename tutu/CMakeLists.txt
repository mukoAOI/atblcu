cmake_minimum_required(VERSION 3.26)
project(tutu)

set(CMAKE_CXX_STANDARD 17)

add_executable(tutu main.cpp
        table.cpp
        table.h)
