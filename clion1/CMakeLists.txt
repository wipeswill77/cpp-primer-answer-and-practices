cmake_minimum_required(VERSION 3.26)
project(clion1)

set(CMAKE_CXX_STANDARD 20)

FILE(GLOB_RECURSE HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/Sales_data/*.h)
FILE(GLOB_RECURSE SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/Sales_data/*.cpp)

add_executable(clion1 main.cpp
        headers.h
        ${HEADERS}
        ${SOURCES}
)

