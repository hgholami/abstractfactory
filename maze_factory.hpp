//
// Created by Houman on 2019-11-29.
//

#pragma once
#include "maze.hpp"

class maze_factory {
    virtual maze make_maze() = 0;
    virtual wall make_wall() = 0;
    virtual room make_room() = 0;
    virtual door make_door(room& room1, room& room2) = 0;
};
