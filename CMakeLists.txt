cmake_minimum_required(VERSION 3.9)
project(Cplus)

set(CMAKE_CXX_STANDARD 11)

add_executable(Cplus main.cpp Particle.cpp Particle.h LJ.cpp LJ.h)