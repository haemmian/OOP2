cmake_minimum_required(VERSION 3.5)

project(entryProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(entryProject main.cpp warehouse.h warehouse.cpp car.h car.cpp)

install(TARGETS entryProject
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
