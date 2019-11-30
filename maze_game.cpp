//
// Created by Houman on 2019-11-29.
//

#include "maze_game.hpp"
maze* maze_game::create_maze(maze_factory& factory) {
    maze* maze = factory.make_maze();

    room* room1 = factory.make_room(1);
    room* room2 = factory.make_room(2);

    room1->add_wall(factory.make_wall(1));
    room1->add_wall(factory.make_wall(2));
    room1->add_wall(factory.make_wall(3));
    room1->add_wall(factory.make_wall(4));


    room2->add_wall(factory.make_wall(5));
    room2->add_wall(factory.make_wall(6));
    room2->add_wall(factory.make_wall(7));
    room2->add_wall(factory.make_wall(8));

    door* door = factory.make_door(1, *room1, *room2);

    maze->add_room(room1);
    maze->add_room(room2);
    maze->add_door(door);

    return maze;
}