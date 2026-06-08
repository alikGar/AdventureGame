#include "Savesystem.h"
#include <iostream>
#include <fstream>
void SaveSystem::saveGame(int health, int currentLocation){
  std::ofstream file("save.txt");
    file << health << std::endl;
    file << currentLocation << std::endl;

    file.close();
    std::cout << "Game saved!" << std::endl;
}
    void SaveSystem::loadGame() {
    std::ifstream file("save.txt");
    int health;
    int currentLocation;
    file >> health;
    file >> currentLocation;
    file.close();

    std::cout << "Game loaded!" << std::endl;
    std::cout << "Health: " << health << std::endl;
    std::cout << "Location: " << currentLocation << std::endl;
}