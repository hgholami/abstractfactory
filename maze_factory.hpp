//
// Created by Houman on 2019-11-29.
//

#pragma once
#include "maze.hpp"

/*
 * Abstract class representing a maze factory
 */
struct maze_factory {
    /*
     * Pure virtual function to be overwritten
     * Used to make a maze
     * @param return - pointer to the new maze
     */
    virtual maze* make_maze() = 0;

    /*
     * Pure virtual function to be overwritten
     * Used to make a wall
     * @param return - pointer to the new wall
     */
    virtual wall* make_wall(int num) = 0;

    /*
     * Pure virtual function to be overwritten
     * Used to make a room
     * @param return - pointer to the new room
     */
    virtual room* make_room(int num) = 0;

    /*
     * Pure virtual function to be overwritten
     * Used to make a door
     * @param return - pointer to the new door
     */
    virtual door* make_door(int num, room& room1, room& room2) = 0;
};
