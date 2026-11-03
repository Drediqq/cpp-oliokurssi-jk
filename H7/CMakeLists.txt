cmake_minimum_required(VERSION 3.10.0)
project(h7 VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(h7 h7.cpp)
target_include_directories(h7 PRIVATE src)

