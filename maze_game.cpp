//
// Created by Houman on 2019-11-29.
//

#include "maze_game.hpp"
maze* maze_game::create_maze(maze_factory& factory) {
    maze* maze = factory.make_maze();

    room* room1 = factory.make_room(1);
    room* room2 = factory.make_room(2);

    room1->build_wall(1);
    room1->build_wall(2);
    room1->build_wall(3);
    room1->build_wall(4);

    room2->build_wall(1);
    room2->build_wall(2);
    room2->build_wall(3);
    room2->build_wall(4);

    door* door = factory.make_door(1, *room1, *room2);

    maze->add_room(room1);
    maze->add_room(room2);
    maze->add_door(door);

    return maze;
}