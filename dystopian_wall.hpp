//
// Created by Houman on 2019-11-29.
//

#pragma once
#include "wall.hpp"

class dystopian_wall : public wall {
public:
    dystopian_wall(int wallNum) : wall(wallNum){};
    ~dystopian_wall(){};
    void print() override;
};