# opengl-sandbox
co-op project for 3D object rendering
test commit

# Setup
1. For Ubuntu: set up with sudo aptget
> sudo apt-get install libglfw3-dev libgl1-mesa-dev libglu1-mesa-dev freeglut3-dev libglew-dev
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