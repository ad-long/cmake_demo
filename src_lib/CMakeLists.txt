set(LIBNAME src_lib)

add_library(${LIBNAME} INTERFACE)
target_include_directories(${LIBNAME} INTERFACE ..)
