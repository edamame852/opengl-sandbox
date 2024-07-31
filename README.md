# opengl-sandbox
co-op project for 3D object rendering for mechnics

# Setup
1. For Ubuntu: set up with sudo aptget
> sudo apt-get install libglfw3-dev libgl1-mesa-dev libglu1-mesa-dev freeglut3-dev libglew-dev

- For MaxOS: set up with brew
```bash
brew install glfw glew
```


Note: `glfw` is for window management and `glew` modern OpenGL functions

2. Check g++ version with `g++ --version`

```bash
Apple clang version 15.0.0 (clang-1500.1.0.2.5)
Target: x86_64-apple-darwin22.6.0
Thread model: posix
InstalledDir: /Library/Developer/CommandLineTools/usr/bin
```
If you have the above for macOS you're good

3. Compile your script into an executable

```bash
g+++ main.cpp -o /bin/main
```

4. Run your executable in your cli: `./main`

# Compile and print Hello World with header files (.h)
1. `g++ main.cpp -o bin/main -lGLEW -lglfw -framework OpenGL`
2. `./bin/main` to run the executable

ORDER MATTERS!

```c++
#include <GL/glew.h> // GLEW header must be included first
#include <GLFW/glfw3.h> // GLFW header comes after GLEW
#include <iostream>

int main() {
    std::string name = "World";
    std::cout << "Hello, " << name << "!" << '\n';
    return 0;
}
```

3. Rewrite main():
- Initlize GLFW: Graphics Library Framework
```c++


```