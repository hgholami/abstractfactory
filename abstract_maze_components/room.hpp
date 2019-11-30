//
// Created by Houman on 2019-11-29.
//

#pragma once
#include <iostream>
#include <vector>
#include "wall.hpp"

/*
 * Abstract class representing a room
 */
class room{
protected:
    //Room number
    int number;

    //List of all walls of room
    vector<wall*> walls;

public:
    /*
     * Constructor of wall
     * @param - number: the number of the room
     */
    room(int number) : number(number){};

    /*
     * Default destructor
     */
    ~room(){};

    /*
     * Virtual print function to be overwritten
     */
    virtual void print() = 0;

    /*
     * Virtual function to be overwritten to add a wall to the room
     * @param - wall: pointer to wall being added
     */
    virtual void add_wall(wall* wall) = 0;
};
