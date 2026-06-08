#include "Puzzle.h"
#include <iostream>

void Puzzle::showAnswer() {
    std::cout << answer << std::endl;
}
bool Puzzle::checkQuestion() {
    std::string userAnswer;

    std::cout << question << std::endl;
    std::cin >> userAnswer;

    if (userAnswer == answer) {
        std::cout << "Correct answer!" << std::endl;
        return true;
    }

    std::cout << "Wrong answer!" << std::endl;
    return false;
}
    
