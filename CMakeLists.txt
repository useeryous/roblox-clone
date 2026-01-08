cmake_minimum_required(VERSION 3.16)
project(r-engine)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(PkgConfig REQUIRED)
pkg_check_modules(SDL2 REQUIRED sdl2)

add_executable(r-engine
    src/native/src/r-engine/engine.cpp
    src/native/src/r-engine/main.cpp
)

target_include_directories(r-engine PRIVATE
    ${SDL2_INCLUDE_DIRS}
    src/native/src/r-engine
)

target_link_libraries(r-engine PRIVATE
    ${SDL2_LIBRARIES}
)

target_compile_options(r-engine PRIVATE ${SDL2_CFLAGS_OTHER})
