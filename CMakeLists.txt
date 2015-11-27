cmake_minimum_required (VERSION 2.8)

project (main)
project (unittest)

add_executable (main main.cpp sample_class.cpp)

add_executable (unittest unittest.cpp sample_class.cpp)
target_link_libraries(unittest gtest pthread)

