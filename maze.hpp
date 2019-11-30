//
// Created by Houman on 2019-11-29.
//

#pragma once
#include "room.hpp"
#include "door.hpp"

class maze{
protected:
    vector<room*> rooms;
    vector<door*> doors;
    vector<wall*> walls;

public:
    virtual void add_room(room* room){rooms.push_back(room);}
    virtual void add_door(door* door){doors.push_back(door);}
    virtual void add_wall(wall* wall){walls.push_back(wall);}
    virtual void print() = 0;
};