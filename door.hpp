//
// Created by Houman on 2019-11-29.
//

#pragma once

class door{
    int number;
    room* room1;
    room* room2;

public:
    virtual void print() = 0;
};