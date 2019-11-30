//
// Created by Houman on 2019-11-29.
//

#include "enchanted_room.hpp"
void enchanted_room::print() {
    cout << "Enchanted faery land room number " << number << endl;
    cout << "The walls of this room are: " << endl;
    for(wall* w : walls)
        w->print();
}

void enchanted_room::add_wall(wall* wall) {
    walls.push_back(wall);
}