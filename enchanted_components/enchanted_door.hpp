//
// Created by Houman on 2019-11-29.
//

#pragma once
#include "../abstract_maze_components/door.hpp"

/*
 * Class representing an enchanted door
 * Subclass of abstract class door
 */
class enchanted_door : public door{
public:
    /*
     * Constructor
     * @param - doorNum: the number of the door
     * @param - room1: pointer to a room to be connected
     * @param - room2: pointer to a room to be connected
     */
    enchanted_door(int doorNum, room* room1, room* room2) : door(doorNum, room1, room2){};

    /*
     * Default destructor
     */
    ~enchanted_door(){};

    /*
     * Overwritten print function
     * prints the enchanted door number
     * prints all information about enchanted rooms the door connects
     */
    void print() override;
};
