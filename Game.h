#ifndef GAME_H
#define GAME_H
#include "Location.h"
#include "Puzzle.h"
#include "Character.h"

class Game {
public:
    Character player;
    bool isRunning;
    int currentLocation;
    Location startRoom;
    Location puzzleRoom;
    Location exitRoom;

    Location chestRoom1;
    Location chestRoom2;

    void startGame();
    void showMenu();
    void playTurn();
    void endGame();
};

#endif