# r-engine

## Overview
A C++ game engine using SDL2 for rendering and Lua for scripting. This is a work-in-progress project in early development.

## Project Structure
```
/
├── CMakeLists.txt          # Main build configuration
├── src/
│   ├── client/             # Network client code (incomplete)
│   │   ├── client.cpp
│   │   └── client.hpp
│   └── native/
│       ├── script/         # Lua scripting support
│       └── src/
│           ├── r-engine/   # Main engine code
│           │   ├── main.cpp    # Entry point
│           │   ├── engine.cpp
│           │   └── engine.h
│           └── script/     # Script language handling
├── server/                 # Server-side resources
│   ├── database/
│   └── scripts/
├── tests/                  # Test files
└── build/                  # Build output (generated)
```

## Build System
Uses CMake with the following dependencies:
- SDL2 for graphics and windowing
- Lua for scripting (planned)
- C++17 standard

### Building
```bash
mkdir -p build && cd build
cmake ..
make -j4
```

### Running
```bash
cd build && ./r-engine
```

## Workflow
- **r-engine**: Runs the main engine executable with VNC output for desktop display

## Recent Changes
- January 2026: Imported from GitHub and configured for Replit
- Converted from SDL3 to SDL2 (SDL3 not available in nixpkgs)
- Added CMakeLists.txt for build configuration
- Created main.cpp entry point with SDL2 window setup
