//
// Created by Houman on 2019-11-29.
//

#pragma once
#include "wall.hpp"

class enchanted_wall : public wall{
public:
    enchanted_wall(int wallNum) : wall(wallNum){};
    ~enchanted_wall(){};
    void print() override;
};