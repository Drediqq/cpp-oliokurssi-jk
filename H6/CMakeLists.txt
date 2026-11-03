cmake_minimum_required(VERSION 3.10.0)
project(h6 VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(h6 h6.cpp)
target_include_directories(h6 PRIVATE src)

