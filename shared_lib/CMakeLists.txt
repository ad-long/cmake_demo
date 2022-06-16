set(LIBNAME shared_lib)

add_library(${LIBNAME} SHARED src/MyLog.cpp)
target_include_directories(${LIBNAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
