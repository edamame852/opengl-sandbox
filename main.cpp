#include <GL/glew.h> // GLEW header must be included first
#include <GLFW/glfw3.h> // GLFW header comes after GLEW
#include <iostream>

int main() {
    // Printing Hello World
    std::string name = "World";
    std::cout << "Hello, " << name << "!" << '\n';

    // Initialize GLFW:
    if(!glfwInit()) {
        std::cerr << "Failed to initialize GLFW!" << '\n';
        return 1;
    }

    // Create a windowed mode window and its OpenGL context:
    GLFWwindow* window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if(!window) {
        std::cerr << "Failed to create window!" << '\n';
        glfwTerminate();
        return 1;
    }

    // Make the window's context current:
    glfwMakeContextCurrent(window);

    // Initialize GLEW:
    glewExperimental = GL_TRUE; // Needed for core profile
    if(glewInit() != GLEW_OK) {
        std::cerr << "Failed to initialize GLEW!" << '\n';
        glfwTerminate();
        return 1;
    }   

    // Loop until the user closes the window:
    while(!glfwWindowShouldClose(window)) {
        // Render here:
        glClear(GL_COLOR_BUFFER_BIT);

        // Swap front and back buffers:
        glfwSwapBuffers(window);

        // Poll for and process events:
        glfwPollEvents();
    }   

    // Close the window:   
    glfwTerminate();
    return 0;
}