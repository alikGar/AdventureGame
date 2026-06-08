#include "Game.h"
#include "Potion.h"
#include "Savesystem.h"
#include "Puzzle.h"
#include <iostream>

void Game::startGame() {
    player.health = 50;
    player.currentLocation = 1;


    startRoom.id = 1;
    startRoom.name = "Forest Entrance";
    startRoom.hasChest = false;

    chestRoom1.id = 2;
    chestRoom1.name = "Hunter Hut";
    chestRoom1.hasChest = true;

    puzzleRoom.id = 3;
    puzzleRoom.name = "Dark Cave";
    puzzleRoom.hasChest = false;

    chestRoom2.id = 4;
    chestRoom2.name = "Ancient Temple";
    chestRoom2.hasChest = true;

    exitRoom.id = 5;
    exitRoom.name = "Treasure Gate";
    exitRoom.hasChest = false;

    

    
    std::cout << "Health: " << player.health << std::endl;
    std::cout << "Location: " << player.currentLocation << std::endl;

    startRoom.showmap();

    int choice;

    std::cout << "1. Go next" << std::endl;
    std::cout << "2. Exit" << std::endl;
    std::cin >> choice;

    if (choice == 1) {
        player.currentLocation = 2;
        std::cout << "Location: " << player.currentLocation << std::endl;
        chestRoom1.showmap();

        std::cout << "You found a wooden chest!" << std::endl;
        std::cout << "Forest Herb added to inventory!" << std::endl;

        player.inventory.push_back(smallPotion);

        std::cout << "Potions in inventory: "
                  << player.inventory.size()
                  << std::endl;
    }
    else {
        endGame();
        return;
    }

    Puzzle puzzle1;
    puzzle1.id = 1;
    puzzle1.name = "Apple Puzzle";
    puzzle1.question = "You have 3 apples. You take 2 apples. How many apples do you have?";
    puzzle1.answer = "2";
    puzzle1.damage = 10;

    if (!puzzle1.checkQuestion()) {
        player.takeDamage(puzzle1.damage);
    }

    player.currentLocation = 3;
    std::cout << "Location: " << player.currentLocation << std::endl;
    puzzleRoom.showmap();

    Puzzle puzzle2;
    puzzle2.id = 2;
    puzzle2.name = "Weight Puzzle";
    puzzle2.question = "What is heavier: 1 kilogram of iron or 1 kilogram of cotton? Answer: equal";
    puzzle2.answer = "equal";
    puzzle2.damage = 10;

    if (!puzzle2.checkQuestion()) {
        player.takeDamage(puzzle2.damage);
    }

    player.currentLocation = 4;
    std::cout << "Location: " << player.currentLocation << std::endl;
    chestRoom2.showmap();

    Puzzle puzzle3;
    puzzle3.id = 3;
    puzzle3.name = "Cats Puzzle";
    puzzle3.question = "If 2 cats catch 2 mice in 2 minutes, how many cats are needed to catch 100 mice in 100 minutes?";
    puzzle3.answer = "2";
    puzzle3.damage = 15;

    if (!puzzle3.checkQuestion()) {
        player.takeDamage(puzzle3.damage);
    }

    Puzzle puzzle4;
    puzzle4.id = 4;
    puzzle4.name = "Promise Puzzle";
    puzzle4.question = "What can be broken without touching it? Answer in English.";
    puzzle4.answer = "promise";
    puzzle4.damage = 15;

    if (!puzzle4.checkQuestion()) {
        player.takeDamage(puzzle4.damage);
    }

    std::cout << "You found an ancient chest!" << std::endl;
    std::cout << "Ancient Elixir added to inventory!" << std::endl;

    player.inventory.push_back(bigPotion);

    std::cout << "Potions in inventory: "
              << player.inventory.size()
              << std::endl;

    player.usePotion();

    player.currentLocation = 5;
    std::cout << "Location: " << player.currentLocation << std::endl;
    exitRoom.showmap();

    std::cout << "Congratulations! You completed the adventure!" << std::endl;
}

void Game::showMenu() {
    int choice;

    std::cout << "1. Start Adventure" << std::endl;
    std::cout << "2. Load Game" << std::endl;
    std::cout << "3. Exit" << std::endl;

    std::cin >> choice;

    if (choice == 1) {
        startGame();
    }
    else if (choice == 2) {
        SaveSystem save;
        save.loadGame();
    }
    else if (choice == 3) {
        endGame();
    }
}

void Game::playTurn() {
    std::cout << "player turn" << std::endl;
}

void Game::endGame() {
    std::cout << "end the game" << std::endl;
}