//
// Created by Houman on 2019-11-29.
//

#pragma once

#include "maze_factory.hpp"

struct maze_game {
    maze* create_maze(maze_factory& factory);
};