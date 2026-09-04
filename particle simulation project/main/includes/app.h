#pragma once
#include "win.h"

class App{
public:
GLFWwindow* window = nullptr;
bool stopRender = true;

App(GLFWwindow* win);
~App();

void onUpdate(float &tm);
void onRender();
void onEvent();

};