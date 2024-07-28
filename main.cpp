#include <GL/glew.h>
#include "glfw_init/glfw_init.h" // Include the header for GLFW initialization
#include <iostream>

int main() {
    // Initialize GLFW and create a window
    GLFWwindow* window = initializeGLFW();
    if (!window) {
        return 1; // If window creation failed, exit
    }

    // Initialize GLEW
    glewExperimental = GL_TRUE; // Needed for core profile
    if (glewInit() != GLEW_OK) {
        std::cerr << "Failed to initialize GLEW!" << '\n';
        return 1;
    }

    // Main loop and other logic...

    glfwTerminate(); // Clean up and close the window
    return 0;
}