#include <iostream>

#include <glad/glad.h>
#include <GLFW/glfw3.h>


int main(int argv, char** argc){
    printf("hello world...\n");

glfwInit();
glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

GLFWwindow* window = glfwCreateWindow(600, 600, "ttt", NULL, NULL);

glfwMakeContextCurrent(window);


while(!glfwWindowShouldClose(window)){

glfwPollEvents();
glfwSwapBuffers(window);

}

glfwDestroyWindow(window);
glfwTerminate();
    return 0;
}