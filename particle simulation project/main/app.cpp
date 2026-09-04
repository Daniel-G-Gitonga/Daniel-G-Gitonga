#include <iostream>
#include "app.h"
App::App(GLFWwindow* win){
this->window = win;
}
App::~App(){

}


void App::onEvent(){
//pass information going on in the app
}
void App::onUpdate(float &tm){
//the calc series(maclaurin and euler ) for 3d space calculations
//tm is time

}
void App::onRender(){
if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){
 printf("failed to load glad\n");
}
float time_ = float();
while(!glfwWindowShouldClose(window)){
time_ = static_cast<float>(glfwGetTime());

glClearColor(0.951f, 0.521f, 0.21f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT);

onEvent();
onUpdate(time_);

glfwPollEvents();
glfwSwapBuffers(window);
}

}
