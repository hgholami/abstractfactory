//
// Created by Houman on 2019-11-29.
//

#pragma once
#include <iostream>
#include <vector>
#include "wall.hpp"

class room{
protected:
    int number;

public:
    room(int number) : number(number){};
    ~room(){};
    virtual void print() = 0;
};
