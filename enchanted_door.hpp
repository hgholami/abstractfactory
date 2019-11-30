//
// Created by Houman on 2019-11-29.
//

#pragma once
#include "door.hpp"

class enchanted_door : public door{
public:
    enchanted_door(int doorNum, room* room1, room* room2) : door(doorNum, room1, room2){};
    ~enchanted_door(){};
    void print() override;
};
