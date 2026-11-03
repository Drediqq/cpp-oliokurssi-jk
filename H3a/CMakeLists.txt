cmake_minimum_required(VERSION 3.10.0)
project(h3a VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(h3a main.cpp src/chef.cpp src/chef.h src/italianchef.cpp src/italianchef.h)
target_include_directories(h3a PRIVATE src)

