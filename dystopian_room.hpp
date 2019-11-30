//
// Created by Houman on 2019-11-29.
//

#pragma once
#include "room.hpp"

class dystopian_room : public room{
    dystopian_room(int roomNum) : room(roomNum){};
    ~dystopian_room(){};
    void print() override;
};