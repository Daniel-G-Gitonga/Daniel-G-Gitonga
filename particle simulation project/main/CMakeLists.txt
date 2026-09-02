project(particles)

link_directories(${CMAKE_SOURCE_DIR}/libraries)
include_directories(${CMAKE_SOURCE_DIR}/src/includes)

add_executable(particles main.cpp glad.c ${CMAKE_SOURCE_DIR}/assets/icon/icon.rc)

target_link_libraries(particles PUBLIC glfw3dll.lib)
#check 
add_custom_command(
    TARGET particles
    POST_BUILD
    COMMAND "${CMAKE_COMMANDS}" -E copy_if_different
    "${CMAKE_SOURCE_DIR}/build/main"
    "${CMAKE_SOURCE_DIR}/executable"
)