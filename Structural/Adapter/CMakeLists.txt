cmake_minimum_required (VERSION 2.6)

project (Adapter)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}  -std=c++14")

set(SOURCE_FILES src/Adapter.cpp)

add_executable(Adapter ${SOURCE_FILES})
