//
// Created by Houman on 2019-11-29.
//

#pragma once
#include <iostream>

using namespace std;

/*
 * Abstract class representing a wall
 */
class wall{
protected:
    //Wall number
    int number;

public:
    /*
     * Constructor of wall
     * @param - wallNum: the number of the wall
     */
    wall(int wallNum) : number(wallNum){};

    /*
     * Default destructor
     */
    ~wall(){};

    /*
     * Virtual print function to be overwritten
     */
    virtual void print() = 0;
};