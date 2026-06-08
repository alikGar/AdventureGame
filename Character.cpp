#include "Character.h"
#include <iostream>
void Character::move(){
    std::cout << "Character moved!" << std::endl; }
void Character::takeDamage(int damage) {
    health -= damage;

    std::cout << "You received "
              << damage
              << " damage!" << std::endl;

    std::cout << "Health: "
              << health
              << std::endl;
}
void Character::usePotion() {
    if (inventory.empty()) {
        std::cout << "No potions in inventory!" << std::endl;
        return;
    }

    health += inventory[0].healthLevel;

    std::cout << "Potion used!" << std::endl;
    std::cout << "Health: " << health << std::endl;

    inventory.erase(inventory.begin());
}