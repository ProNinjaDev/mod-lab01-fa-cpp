cmake_minimum_required (VERSION 3.10.2)
project (mod-lab01-fa-cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O3 -g")


set(tool_dest "bin")
set(lib_dest "lib")
set(include_dest "include/")

add_subdirectory(src)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
add_subdirectory("D:/Github clones/googletest" googletest)
include_directories("D:/Github clones/googletest/googletest/include")
add_subdirectory(test)
