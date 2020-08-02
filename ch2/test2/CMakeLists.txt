cmake_minimum_required(VERSION 2.6)
project(test2)

add_executable(test2 main.cpp)

install(TARGETS test2 RUNTIME DESTINATION bin)
