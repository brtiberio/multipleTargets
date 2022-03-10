cmake_minimum_required(VERSION 3.21)
project(ProjB)

include_directories(config)
add_executable(ProjB_unitTest unitTests/ProjB_unitTest.cpp config/config.c)
target_link_libraries(ProjB_unitTest gtest_main generic)
add_test(NAME ProjB_test COMMAND ProjB_unitTest)
