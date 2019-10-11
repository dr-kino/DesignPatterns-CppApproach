cmake_minimum_required (VERSION 2.6)

project (Singleton)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}  -std=c++14")

add_executable(Singleton src/main.cpp
                        src/Singleton.cpp
                        src/Singleton.h
)
