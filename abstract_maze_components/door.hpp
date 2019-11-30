//
// Created by Houman on 2019-11-29.
//

#pragma once
#include <iostream>
#include "room.hpp"

/*
 * Class representing an abstract door
 */
class door{
protected:
    //Door number
    int number;

    //First room of the two rooms the door connects
    room* room1;

    //Second room of the two rooms the door connects
    room* room2;

public:
    /*
     * Constructor of door
     * @param - doorNum: the number of the door
     * @param - room1: pointer to a room to be connected
     * @param - room2: pointer to a room to be connected
     */
    door(int doorNum, room* room1, room* room2) : number(doorNum), room1(room1), room2(room2){};

    /*
     * Default destructor
     */
    ~door(){};

    /*
     * Virtual print function to be overwritten
     */
    virtual void print() = 0;
};