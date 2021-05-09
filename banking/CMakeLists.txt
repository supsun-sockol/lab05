cmake_minimum_required(VERSION 3.2)

add_definitions(-std=c++0x)

project(bank)

if(BUILD_TESTS)
  enable_testing()
  add_subdirectory(third-party/gtest)
  file(GLOB \${PROJECT_NAME}_TEST_SOURCES tests/*.cpp)
  add_executable(check \${\${PROJECT_NAME}_TEST_SOURCES})
  target_link_libraries(check \${PROJECT_NAME} gtest_main)
  add_test(NAME check COMMAND check)
endif()

include_directories(tests)

add_library(lib1 Account.h Account.cpp)
add_library(lib2 Transaction.h Transaction.cpp)
add_executable(test test.cpp)
target_link_libraries(test lib1)
