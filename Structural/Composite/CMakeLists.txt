cmake_minimum_required (VERSION 2.6)

project (Composite)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}  -std=c++14")

set(SOURCE_FILES src/Composite.cpp)

add_executable(Composite ${SOURCE_FILES})
