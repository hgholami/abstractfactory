cmake_minimum_required(VERSION 3.15)
project(abstractfactory)

set(CMAKE_CXX_STANDARD 14)

add_executable(abstractfactory main.cpp maze_factory.hpp maze_game.cpp maze_game.hpp maze.hpp room.hpp wall.hpp door.hpp)