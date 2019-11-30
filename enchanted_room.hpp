//
// Created by Houman on 2019-11-29.
//

#pragma once
#include "room.hpp"
#include "enchanted_wall.hpp"

/*
 * Class representing an enchanted room
 * Subclass of abstract class room
 */
class enchanted_room : public room{
public:
    /*
     * Constructor
     * @param - roomNum: the room number
     */
    enchanted_room(int roomNum) : room(roomNum){}

    /*
     * Destructor
     * Frees all memory allocated to the walls of the room
     */
    ~enchanted_room(){
        for(wall* w : walls)
            delete(w);
    };

    /*
     * Overwritten print function
     * prints all information about enchanted room and its walls
     */
    void print() override;

    /*
     * Overwritten function to add a wall to the room
     * @param - wall: pointer to wall being added
     */
    void add_wall(wall* wall) override;
};
