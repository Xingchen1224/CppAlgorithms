cmake_minimum_required(VERSION 3.5)
project(CppAlgorithms)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp CSort.h CSequence.cpp CSequence.h)
add_executable(CppAlgorithms ${SOURCE_FILES})