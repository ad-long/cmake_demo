project(cmake_demo CXX)

cmake_minimum_required(VERSION 3.8)

set(CMAKE_CXX_STANDARD 17)
SET(CMAKE_C_COMPILER "gcc")
SET(CMAKE_C_FLAGS_DEBUG "-g")

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

add_subdirectory(static_lib)
add_subdirectory(shared_lib)
add_subdirectory(src_lib)
add_subdirectory(example)

message("end build")