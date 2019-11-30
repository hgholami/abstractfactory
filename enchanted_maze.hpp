//
// Created by Houman on 2019-11-29.
//

#pragma once
#include "maze.hpp"

/*
 * Class representing a enchanted maze
 * Subclass of abstract class maze
 */
class enchanted_maze : public maze{
    /*
     * Overwritten print function
     * prints all information about enchanted doors, rooms and walls within the maze
     */
    void print() override;
};