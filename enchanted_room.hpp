//
// Created by Houman on 2019-11-29.
//

#pragma once
#include "room.hpp"
#include "enchanted_wall.hpp"

class enchanted_room : public room{
public:
    enchanted_room(int roomNum) : room(roomNum){}
    ~enchanted_room(){
        for(wall* w : walls)
            delete(w);
    };

    void print() override;
    void add_wall(wall* wall) override;
};
