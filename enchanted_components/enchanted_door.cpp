//
// Created by Houman on 2019-11-29.
//

#include "enchanted_door.hpp"
void enchanted_door::print() {
    cout << "Enchanted faery land door number " << number << endl;
    cout << "Connecting  rooms:" << endl;
    room1->print();
    room2->print();
    cout << endl;
}