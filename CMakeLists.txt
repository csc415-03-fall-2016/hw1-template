cmake_minimum_required(VERSION 2.8)
project(hw1)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_definitions(-std=c99)


set(SOURCE_FILES main.c)
add_executable(hw1 ${SOURCE_FILES})