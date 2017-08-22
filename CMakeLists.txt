cmake_minimum_required (VERSION 2.6)
project (Tutorial)

# compile the main file

SET(CMAKE_C_COMPILER gcc)

include_directories ("${PROJECT_SOURCE_DIR}/lib")
#add_subdirectory (lib)

add_executable(output main.c)
target_link_libraries (output lib)

# test the lib
