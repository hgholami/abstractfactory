cmake_minimum_required(VERSION 3.15)
project(abstractfactory)

set(CMAKE_CXX_STANDARD 14)

add_executable(abstractfactory main.cpp maze_factory.hpp maze_game.cpp maze_game.hpp maze.hpp room.hpp wall.hpp door.hpp enchanted_wall.cpp enchanted_wall.hpp dystopian_wall.cpp dystopian_wall.hpp enchanted_room.cpp enchanted_room.hpp dystopian_room.cpp dystopian_room.hpp)