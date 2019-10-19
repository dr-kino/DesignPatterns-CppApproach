cmake_minimum_required (VERSION 2.6)

project (Decorator)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}  -std=c++14")

set(SOURCE_FILES src/Decorator.cpp)

add_executable(Decorator ${SOURCE_FILES})
