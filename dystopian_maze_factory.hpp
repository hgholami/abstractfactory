//
// Created by Houman on 2019-11-29.
//

#pragma once
#include "maze_factory.hpp"
#include "dystopian_wall.hpp"
#include "dystopian_room.hpp"
#include "dystopian_door.hpp"
#include "dystopian_maze.hpp"

class dystopian_maze_factory : public maze_factory {
    wall* make_wall(int num) override;
    room* make_room(int num) override;
    door* make_door(int num, room& room1, room& room2) override;
    maze* make_maze() override;
};