set(LIBNAME static_lib)

add_library(${LIBNAME} STATIC src/MyMath.cpp)
target_include_directories(${LIBNAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
