cmake_minimum_required(VERSION 3.10.0)
project(h1 VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(h1 main.cpp src/funcs.cpp src/funcs.h)
target_include_directories(h1 PRIVATE src)

