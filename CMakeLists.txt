project(C-NOVA)

set(CMAKE_C_STANDARD 99)
add_executable(xo xo/main.c)

target_link_libraries(xo PUBLIC
        ${GLFW_LIBRARIES}
        ${GLEW_LIBRARIES}
        ${OPENGL_LIBRARIES}
        winMM.Lib)


