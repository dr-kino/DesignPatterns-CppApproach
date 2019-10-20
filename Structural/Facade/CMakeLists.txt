cmake_minimum_required (VERSION 2.6)

project (Facade)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}  -std=c++14")

set(SOURCE_FILES src/Facade.cpp)

add_executable(Facade ${SOURCE_FILES})
