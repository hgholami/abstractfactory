//
// Created by Houman on 2019-11-29.
//

#include "dystopian_maze.hpp"
void dystopian_maze::print() {
    cout << "Futuristic Dystopian maze includes:" << endl;
    for(room* r : rooms)
        r->print();
    for(door* d : doors)
        d->print();
}