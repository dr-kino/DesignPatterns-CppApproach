cmake_minimum_required (VERSION 2.6)

project (Proxy)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}  -std=c++14")

set(SOURCE_FILES src/main.cpp
                src/Document.cpp
                src/Document.h
                src/IPage.h
                src/Page.cpp 
                src/Page.h
                src/PageProxy.cpp
                src/PageProxy.h
)

add_executable(Proxy ${SOURCE_FILES})
