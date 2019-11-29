//
// Created by Houman on 2019-11-29.
//

#pragma once

#include "maze_factory.hpp"

class maze_game {
    Maze* create_maze(maze_factory& factory);
};