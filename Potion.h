#ifndef POTION_H
#define POTION_H

#include <string>

class Potion {
public:
    std::string name;
    int id;
    int healthLevel;
    bool rightpotion();
    void usePotion();
};

#endif