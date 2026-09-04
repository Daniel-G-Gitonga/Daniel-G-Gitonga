project(src)

include_directories(includes/)

add_library(src STATIC win.cpp)

add_custom_command(
    TARGET src
    POST_BUILD
    COMMAND "${CMAKE_COMMAND}" -E copy_if_different
    "${CMAKE_SOURCE_DIR}/build/src/libsrc.a"
    "${CMAKE_SOURCE_DIR}/libraries"
)