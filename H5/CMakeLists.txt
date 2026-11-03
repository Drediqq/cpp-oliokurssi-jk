cmake_minimum_required(VERSION 3.10.0)
project(h5 VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(h5 h5.cpp )
target_include_directories(h5 PRIVATE src)

