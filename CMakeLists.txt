cmake_minimum_required(VERSION 3.2)
SET(COVERAGE OFF CACHE BOOL "Coverage")
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
project(bank)
if (COVERAGE)
    target_compile_options(tests PRIVATE --coverage)
    target_link_libraries(tests PRIVATE --coverage)
endif()
enable_testing()
add_subdirectory(third-party/gtest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
add_library(lib1 Account.h Account.cpp)
add_library(lib2 Transaction.h Transaction.cpp)
add_executable(runUnitTests tests/test.cpp)
target_link_libraries(runUnitTests gtest gtest_main)
add_test( runUnitTests runUnitTests )
