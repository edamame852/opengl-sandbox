#include <GL/glew.h> // GLEW header must be included first
#include <GLFW/glfw3.h> // GLFW header comes after GLEW
#include <iostream>

int main() {
    std::string name = "World";
    std::cout << "Hello, " << name << "!" << '\n';
    return 0;
}