cmake_minimum_required(VERSION 3.10.0)
project(h4 VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(h4 main.cpp src/car.cpp src/car.h src/engine.cpp src/engine.h src/wheel.cpp src/wheel.h)
target_include_directories(h4 PRIVATE src)

