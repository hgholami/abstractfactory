//
// Created by Houman on 2019-11-29.
//

#pragma once
#include "room.hpp"
#include "door.hpp"

class maze{
    vector<room> rooms;
    vector<door> doors;

public:
    virtual void print() = 0;
};