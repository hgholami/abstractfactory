//
// Created by Houman on 2019-11-29.
//

#pragma once
#include "wall.hpp"

/*
 * Class representing a enchanted wall
 * Subclass of abstract class wall
 */
class enchanted_wall : public wall{
public:
    /*
     * Constructor
     * @param - wallNum: the wall number
     */
    enchanted_wall(int wallNum) : wall(wallNum){};

    /*
     * Default destructor
     */
    ~enchanted_wall(){};

    /*
     * Overwritten print function
     * prints all information about enchanted wall
     */
    void print() override;
};