cmake_minimum_required (VERSION 2.6)

project (Factory)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}  -std=c++14")

add_executable(Factory src/main.cpp
                        src/FactoryShip.cpp
                        src/FactoryShip.h
                        src/ShipEnormous.cpp
                        src/ShipEnormous.h
                        src/ShipNormal.cpp
                        src/ShipNormal.h
                        src/ShipTiny.cpp
                        src/ShipTiny.h
                        src/IShip.h
)
