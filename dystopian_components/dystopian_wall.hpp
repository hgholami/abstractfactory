//
// Created by Houman on 2019-11-29.
//

#pragma once
#include "../abstract_maze_components/wall.hpp"

/*
 * Class representing a dystopian wall
 * Subclass of abstract class wall
 */
class dystopian_wall : public wall {
public:
    /*
     * Constructor
     * @param - wallNum: the wall number
     */
    dystopian_wall(int wallNum) : wall(wallNum){};

    /*
     * Default destructor
     */
    ~dystopian_wall(){};

    /*
     * Overwritten print function
     * prints all information about dystopian wall
     */
    void print() override;
};