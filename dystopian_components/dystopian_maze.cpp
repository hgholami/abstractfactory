//
// Created by Houman on 2019-11-29.
//

#include "dystopian_maze.hpp"
void dystopian_maze::print() {
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Futuristic Dystopian maze includes:" << endl;
    for(door* d : doors)
        d->print();
}