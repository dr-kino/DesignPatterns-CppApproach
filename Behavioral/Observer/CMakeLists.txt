cmake_minimum_required (VERSION 2.6)

project (Observer)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}  -std=c++14")

set(SOURCE_FILES src/main.cpp
                src/Subject.hpp
                src/Observer.hpp
                src/WeatherData.hpp 
                src/WeatherData.cpp 
                src/Client.hpp 
                src/Client.cpp
)

add_executable(Observer ${SOURCE_FILES})
