//
// Created by Houman on 2019-11-29.
//

#pragma once
#include "door.hpp"

/*
 * Class representing a dystopian door
 * Subclass of abstract class door
 */
class dystopian_door : public door{
public:
    /*
     * Constructor
     * @param - doorNum: the number of the door
     * @param - room1: pointer to a room to be connected
     * @param - room2: pointer to a room to be connected
     */
    dystopian_door(int doorNum, room* room1, room* room2) : door(doorNum, room1, room2){};

    /*
     * Default destructor
     */
    ~dystopian_door(){};

    /*
     * Overwritten print function
     * prints the dystopian door number
     * prints all information about dystopian rooms the door connects
     */
    void print() override;
};