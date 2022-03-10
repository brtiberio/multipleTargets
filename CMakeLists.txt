cmake_minimum_required(VERSION 3.21)
project(multipleTargets C CXX)
set(CMAKE_C_STANDARD 99)
enable_testing()
add_compile_definitions(CMAKE_C_FLAGS=--coverage)
set_directory_properties(directory ADDITIONAL_MAKE_CLEAN_FILES files)


# Add -O0 to remove optimizations when using gcc
IF(CMAKE_COMPILER_IS_GNUCC)
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0")
    set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")
ENDIF(CMAKE_COMPILER_IS_GNUCC)

include(FetchContent)

# get gtest source code and compile it on the fly to address different compilers
# between libraries
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        release-1.11.0
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

include_directories(inc)
add_library(generic ./src/library.c)

add_subdirectory(ProjA)
add_subdirectory(ProjB)


