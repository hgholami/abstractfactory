//
// Created by Houman on 2019-11-29.
//

#pragma once
#include "room.hpp"
#include "door.hpp"

/*
 * Abstract class representing a maze
 */
class maze{
protected:
    //List of all rooms in the maze
    vector<room*> rooms;

    //List of all doors in the maze
    vector<door*> doors;

public:
    /*
     * Destructor
     * Deletes all doors and walls allocated to memory
     */
    ~maze(){
        for(door* d : doors)
            delete(d);
        for(room* r : rooms)
            delete(r);
    }

    /*
     * Virtual function to be overwritten to add a room to the maze
     * @param - door: pointer to room being added
     */
    virtual void add_room(room* room){rooms.push_back(room);}

    /*
     * Virtual function to be overwritten to add a door to the maze
     * @param - door: pointer to door being added
     */
    virtual void add_door(door* door){doors.push_back(door);}

    /*
     * Virtual print function to be overwritten
     */
    virtual void print() = 0;
};