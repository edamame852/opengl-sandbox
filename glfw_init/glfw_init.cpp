#include "glfw_init.h"
#include <iostream>

GLFWwindow* initializeGLFW() {
    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW!" << '\n';
        return nullptr;
    }

    GLFWwindow* window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window) {
        std::cerr << "Failed to create window!" << '\n';
        glfwTerminate();
        return nullptr;
    }

    glfwMakeContextCurrent(window);
    return window;
}