#ifndef CHARACTER_H
#define CHARACTER_H
#include <vector>
#include "Potion.h"

class Character {
public:
    int health;
    int currentLocation;
    std::vector<Potion> inventory;

    void takeDamage(int damage);
    void move();
    void usePotion();
};

#endif
