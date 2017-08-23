cmake_minimum_required (VERSION 2.6)
project (Tutorial)

# compile the main file
SET(CMAKE_C_COMPILER gcc)
SET(CMAKE_BUILD_TYPE Debug)
SET(GCC_COVERAGE_COMPILE_FLAGS "-Wall -std=c99")

# subdirectories with libraries
include_directories ("${PROJECT_SOURCE_DIR}/lib")
add_subdirectory (lib) # read out the cmakelist file

# compile the main program
add_executable(output main.c)
target_link_libraries (output lib)

# Test the functionality
enable_testing()

# Check if the main file run's
add_test (MainRuns output 1 2)
# Try a simple example check the output
add_test (MainAdd output 1 2)
set_tests_properties (MainAdd PROPERTIES PASS_REGULAR_EXPRESSION "result=3")

# Test the internals of the lib
add_subdirectory(tests)
add_test(NAME testAddTest COMMAND  tests/bin/testAdd)