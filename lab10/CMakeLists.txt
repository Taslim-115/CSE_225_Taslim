cmake_minimum_required(VERSION 3.27)
project(lab10)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab10 main.cpp
        StackType.cpp
        StackType.h
        test.cpp)
