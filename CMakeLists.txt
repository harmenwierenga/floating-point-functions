cmake_minimum_required(VERSION 3.26)
project(FloatingPointFunctions VERSION 0.1 LANGUAGES CXX)

find_package(GTest REQUIRED)

add_library(${PROJECT_NAME} include/functions.hpp include/functions_implementation.hpp source/functions.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/include)

enable_testing()

add_executable(FunctionTests test/exponentTests.cpp)
target_link_libraries(FunctionTests PRIVATE gtest::gtest ${PROJECT_NAME})

include(GoogleTest)
gtest_discover_tests(FunctionTests)

