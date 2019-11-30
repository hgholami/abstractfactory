//
// Created by Houman on 2019-11-29.
//

#pragma once
#include "maze.hpp"

struct maze_factory {
    virtual maze* make_maze() = 0;
    virtual wall* make_wall(int num) = 0;
    virtual room* make_room(int num) = 0;
    virtual door* make_door(int num, room& room1, room& room2) = 0;
};
