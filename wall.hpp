//
// Created by Houman on 2019-11-29.
//

#pragma once
#include <iostream>

using namespace std;

class wall{
protected:
    int number;

public:
    wall(int wallNum) : number(wallNum){};
    ~wall(){};
    virtual void print() = 0;
};