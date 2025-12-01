
#compilers
CC := gcc
CXX := g++
#flags


#target
TARGET := r-engine


C_SRCS := $(wildcard src/*.c, src/math/*.c)
CXX_SRCS := $(wildcard renderer/vulkan/*.cpp, renderer/opengl/*.cpp, renderer/directx/*.cpp)



-include $(OBJS:.o=.d)