#pragma once

#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

class WinSpec{
public:
int width = int();
int height = int();
std::string title = std::string();

};

class Win : public WinSpec{
public:
Win();
GLFWwindow* window = nullptr;
void win();
~Win();
};
