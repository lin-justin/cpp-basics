cmake_minimum_required(VERSION 4.2.1)
project(hello_world LANGUAGES CXX)

set(CMAKE_CXX_SCAN_FOR_MODULES OFF)

set(CMAKE_SYSTEM_NAME Windows)

# Set C++ compiler to clang
set(CMAKE_CXX_COMPILER "clang++")

# Set C++ standard to C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add necessary flags for compiling
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic")

add_executable(main
    src/main.cpp
    src/io.cpp
)