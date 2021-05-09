cmake_minimum_required(VERSION 3.2)

add_definitions(-std=c++0x)

project(bank)

add_library(lib1 Account.h Account.cpp)
add_library(lib2 Transaction.h Transaction.cpp)

