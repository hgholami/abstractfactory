//
// Created by Houman on 2019-11-29.
//

#pragma once
#include <vector>
#include "wall.hpp"

class room{
    vector<wall> walls;

public:
    virtual void print() = 0;
};
