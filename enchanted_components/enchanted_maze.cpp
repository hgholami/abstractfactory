//
// Created by Houman on 2019-11-29.
//

#include "enchanted_maze.hpp"
void enchanted_maze::print() {
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Enchanted faery land maze includes:" << endl;
    for(door* d : doors)
        d->print();
}