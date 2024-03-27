#include "Musician.h"
#include <string>
 Musician::Musician() {
    _ins = "";
    _exp = 0;
 }
    Musician::Musician(std::string instrument, int experience) {
        _ins = instrument;
        _exp = experience;
    }

    std::string Musician::get_instrument() {
        return _ins;
    }
    int Musician::get_experience() {
        return _exp;
    }

    Musician::~Musician() {};