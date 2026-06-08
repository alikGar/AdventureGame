#ifndef PUZZLE_H
#define PUZZLE_H
#include <string> 
class Puzzle{
    public:
    int id;
    std::string name;
    std::string difficulty;
    std::string answer;
    std::string question;
    int damage;

    void showAnswer();
    bool checkQuestion();
};
#endif