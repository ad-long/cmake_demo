add_executable(example main.cpp)

target_link_libraries(example Threads::Threads src_lib static_lib shared_lib)
