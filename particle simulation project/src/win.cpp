#include "win.h"

Win::Win(){
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

}

void Win::win(){
    if(width == int()){
        printf("un initialized width default width initialized\n");
        width = 600;
    
    }
    if(height == int()){
        printf("un initialized height default height initialized\n");
        height = 600;
    }
    if(title == std::string()){
        printf("un initialized title default title initialized\n");
        title = "title";
    }
    window = glfwCreateWindow(width, height, title.c_str(), NULL, NULL);
    glfwMakeContextCurrent(window);
}

Win::~Win(){
    glfwDestroyWindow(window);
    glfwTerminate();
}