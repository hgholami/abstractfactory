//
// Created by Houman on 2019-11-29.
//

#include "maze_game.hpp"
maze* maze_game::create_maze(maze_factory& factory) {
    maze* maze = factory.make_maze();

    room* room1 = factory.make_room(++roomCount);
    room* room2 = factory.make_room(++roomCount);

    room1->add_wall(factory.make_wall(++wallCount));
    room1->add_wall(factory.make_wall(++wallCount));
    room1->add_wall(factory.make_wall(++wallCount));
    room1->add_wall(factory.make_wall(++wallCount));


    room2->add_wall(factory.make_wall(++wallCount));
    room2->add_wall(factory.make_wall(++wallCount));
    room2->add_wall(factory.make_wall(++wallCount));
    room2->add_wall(factory.make_wall(++wallCount));

    door* door = factory.make_door(++doorCount, *room1, *room2);

    maze->add_room(room1);
    maze->add_room(room2);
    maze->add_door(door);

    roomCount = wallCount = doorCount = 0;
    return maze;
}