//
// Created by Houman on 2019-11-29.
//

#pragma once
#include "../maze_factory.hpp"
#include "enchanted_wall.hpp"
#include "enchanted_room.hpp"
#include "enchanted_door.hpp"
#include "enchanted_maze.hpp"

/*
 * Class representing an enchanted maze factory
 * Subclass of abstract class maze_factory
 */
class enchanted_maze_factory : public maze_factory{
    /*
     * Creates and returns a new enchanted wall
     * @param - num: the wall number
     * @return - a pointer to the new wall
     */
    wall* make_wall(int num) override;

    /*
     * Creates and returns a new enchanted room
     * @param - num: the room number
     * @return - a pointer to the new room
     */
    room* make_room(int num) override;

    /*
     * Creates and returns a new enchanted door
     * @param - num: the door number
     * @return - a pointer to the new door
     */
    door* make_door(int num, room& room1, room& room2) override;

    /*
     * Creates and returns a new enchanted maze
     * @return - a pointer to the new maze
     */
    maze* make_maze() override;
};