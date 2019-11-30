//
// Created by Houman on 2019-11-29.
//

#include "dystopian_room.hpp"
void dystopian_room::print() {
    cout << "Futuristic Dystopian room number " << number << endl;
    cout << "The walls of this room are: " << endl;
    for(wall* w : walls)
        w->print();
}

void dystopian_room::add_wall(wall* wall) {
    walls.push_back(wall);
}