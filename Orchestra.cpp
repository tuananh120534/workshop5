#include "Orchestra.h"
#include "Musician.h"
#include <string>
#include <iostream>
Orchestra::Orchestra() {
    number_of_members=0;
    cur_number_of_members=0;
    arr_=NULL;
}
Orchestra::Orchestra(int size) {
    number_of_members = size;
    cur_number_of_members = 0;
    arr_ = new Musician[number_of_members];
}
int Orchestra::get_current_number_of_members() {
    return cur_number_of_members;
}

Musician *Orchestra::get_members() {
    return arr_;
}
bool Orchestra::add_musician(Musician new_musician){
    if (cur_number_of_members < number_of_members) {
        arr_[cur_number_of_members] = new_musician;
        cur_number_of_members++;
        return true;
    }
    else {
        return false;
    }
}
bool Orchestra::has_instrument(std::string instrument) {
    for (int i =0; i<cur_number_of_members; i++) {
        if ( arr_[i].get_instrument() == instrument) {
            return true;
        }
    }
    return false;
}
Orchestra::~Orchestra () {
    delete[] arr_;
}