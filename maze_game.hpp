//
// Created by Houman on 2019-11-29.
//

#pragma once
#include "maze_factory.hpp"

/*
 * Class representing a maze game
 */
struct maze_game {
    /*
     * Function to take in any type of maze factory, use it to create a maze, and return the new maze
     * @return - pointer to the new maze
     */
    maze* create_maze(maze_factory& factory);

private:
    //Counter for rooms being added to the maze
    int roomCount = 0;

    //Counter for walls being added to the maze
    int wallCount = 0;

    //Counter for doors being added to the maze
    int doorCount = 0;
};