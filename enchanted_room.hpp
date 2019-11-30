//
// Created by Houman on 2019-11-29.
//

#pragma once
#include "room.hpp"
#

class enchanted_room : public room{
    enchanted_room(int roomNum) : room(roomNum){};
    ~enchanted_room(){};
    void print() override;
};
