//
// Created by Houman on 2019-11-29.
//

#pragma once
#include "maze_factory.hpp"
#include "dystopian_wall.hpp"
#include "dystopian_room.hpp"
#include "dystopian_door.hpp"
#include "dystopian_maze.hpp"

/*
 * Class representing a dystopian maze factory
 * Subclass of abstract class maze_factory
 */
class dystopian_maze_factory : public maze_factory {
    /*
     * Creates and returns a new dystopian wall
     * @param - num: the wall number
     * @return - a pointer to the new wall
     */
    wall* make_wall(int num) override;

    /*
     * Creates and returns a new dystopian room
     * @param - num: the room number
     * @return - a pointer to the new room
     */
    room* make_room(int num) override;

    /*
     * Creates and returns a new dystopian door
     * @param - num: the door number
     * @return - a pointer to the new door
     */
    door* make_door(int num, room& room1, room& room2) override;

    /*
     * Creates and returns a new dystopian maze
     * @return - a pointer to the new maze
     */
    maze* make_maze() override;
};