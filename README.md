# C++ Program

## Build
This project requires a C++ compiler.

### Option A: Install MinGW-w64 (g++)
Common workflow:
1. Install **MinGW-w64**
2. Ensure `g++` is added to PATH

Then build (from this folder):
```sh
g++ -std=c++17 -O2 main.cpp -o app.exe
```

### Option B: Use Visual Studio Build Tools (MSVC)
After installing MSVC Build Tools, use the “Developer Command Prompt” and build:
```sh
cl /std:c++17 /O2 main.cpp
```

## Run
After building:
```sh
./app.exe
```

## What this program does
Reads an integer `x` from stdin and prints:
`The value of x is gonna be <x>`

