cmake_minimum_required(VERSION 3.2)

add_definitions(-std=c++0x)

project(bank)

enable_testing()
add_subdirectory(third-party/gtest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
include_directories(tests)

add_library(lib1 Account.h Account.cpp)
add_library(lib2 Transaction.h Transaction.cpp)
add_executable(test test.cpp)

target_link_libraries(test gtest gtast_main)
add_test( test test )
