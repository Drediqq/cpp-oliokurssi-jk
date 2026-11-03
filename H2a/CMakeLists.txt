cmake_minimum_required(VERSION 3.10.0)
project(h2a VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(h2a h2a.cpp src/car.cpp src/car.h src/rectangle.cpp src/rectangle.h)
target_include_directories(h2a PRIVATE src)

