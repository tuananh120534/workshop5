#ifndef MUSICIAN_H
#define MUSICIAN_H
#include <string>
class Musician {
    private:
    std::string _ins;
    int _exp;
    public:
    Musician();
    Musician(std::string instrument, int experience);

    std::string get_instrument();
    int get_experience();

    ~Musician();


};

#endif