//
// Created by Houman on 2019-11-29.
//

#pragma once
#include "../abstract_maze_components/room.hpp"
#include "dystopian_wall.hpp"

/*
 * Class representing a dystopian room
 * Subclass of abstract class room
 */
class dystopian_room : public room{
public:
    /*
     * Constructor
     * @param - roomNum: the room number
     */
    dystopian_room(int roomNum) : room(roomNum){};

    /*
     * Destructor
     * Frees all memory allocated to the walls of the room
     */
    ~dystopian_room(){
        for(wall* w : walls)
            delete(w);
    };

    /*
     * Overwritten print function
     * prints all information about dystopian room and its walls
     */
    void print() override;

    /*
     * Overwritten function to add a wall to the room
     * @param - wall: pointer to wall being added
     */
    void add_wall(wall* wall) override;
};