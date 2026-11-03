cmake_minimum_required(VERSION 3.10.0)
project(h2b VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(h2b h2b.cpp src/car.cpp src/car.h)
target_include_directories(h2b PRIVATE src)

