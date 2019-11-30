//
// Created by Houman on 2019-11-29.
//

#include "dystopian_maze_factory.hpp"
wall* dystopian_maze_factory::make_wall(int num) {
    return new dystopian_wall(num);
}

room* dystopian_maze_factory::make_room(int num) {
    return new dystopian_room(num);
}

door* dystopian_maze_factory::make_door(int num, room& room1, room& room2) {
    return new dystopian_door(num, &room1, &room2);
}

maze* dystopian_maze_factory::make_maze() {
    return new dystopian_maze();
}