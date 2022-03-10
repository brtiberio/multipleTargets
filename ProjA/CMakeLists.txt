cmake_minimum_required(VERSION 3.21)
project(ProjA)

include_directories(config)
include_directories(../inc)

add_executable(ProjA_unitTest unitTests/ProjA_unitTest.cpp config/config.c)

target_link_libraries(ProjA_unitTest gtest_main generic)
add_test(NAME ProjA_test COMMAND ProjA_unitTest)
