cmake_minimum_required(VERSION 3.0)

project(Console)

include_directories( ./include ./src )

add_library(console STATIC ./src/Console.cpp)
