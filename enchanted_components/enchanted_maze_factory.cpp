//
// Created by Houman on 2019-11-29.
//

#include "enchanted_maze_factory.hpp"
wall* enchanted_maze_factory::make_wall(int num) {
    return new enchanted_wall(num);
}

room* enchanted_maze_factory::make_room(int num) {
    return new enchanted_room(num);
}

door* enchanted_maze_factory::make_door(int num, room& room1, room& room2) {
    return new enchanted_door(num, &room1, &room2);
}

maze* enchanted_maze_factory::make_maze() {
    return new enchanted_maze();
}