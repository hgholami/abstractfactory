//
// Created by Houman on 2019-11-29.
//

#pragma once

class maze_factory {
    virtual Maze make_maze() = 0;
    virtual Wall make_wall() = 0;
    virtual Room make_room() = 0;
    virtual Door make_door(Room& room1, Room& room2) = 0;
};
