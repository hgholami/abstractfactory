//
// Created by Houman on 2019-11-29.
//

#pragma once
#include "room.hpp"
#include "dystopian_wall.hpp"

class dystopian_room : public room{
public:
    dystopian_room(int roomNum) : room(roomNum){};
    ~dystopian_room(){
        for(wall* w : walls)
            delete(w);
    };

    void print() override;
    void build_wall(int wallNum) override;
};