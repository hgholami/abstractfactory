//
// Created by Houman on 2019-11-29.
//

#pragma once
#include <iostream>
#include "room.hpp"

class door{
protected:
    int number;
    room* room1;
    room* room2;

public:
    door(int doorNum, room* room1, room* room2) : number(doorNum), room1(room1), room2(room2){};
    ~door(){};
    virtual void print() = 0;
};