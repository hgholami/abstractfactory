//
// Created by Houman on 2019-11-29.
//

#include "dystopian_door.hpp"
void dystopian_door::print() {
    cout << "Futuristic Dystopian door number " << number << endl;
    cout << "Connecting  rooms:" << endl;
    room1->print();
    room2->print();
    cout << endl;
}