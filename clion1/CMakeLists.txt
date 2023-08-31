cmake_minimum_required(VERSION 3.26)
project(clion1)

set(CMAKE_CXX_STANDARD 20)

add_executable(clion1 main.cpp
        Sales_data/Sales_data.cpp
        Sales_data/Sales_data.h
        Sales_data/Person.cpp
        Sales_data/Person.h
        headers.h
)
