#include "Location.h"
#include <iostream>
void Location::showmap()
{
    switch(id)
    {
        case 1: 
            std::cout <<
            "#################\n"
            "# T           T #\n"
            "#      @        #\n"
            "#               #\n"
            "#       D       #\n"
            "#################\n";
            break;

        case 2: 
            std::cout <<
            "#################\n"
            "#      C        #\n"
            "#               #\n"
            "#      H        #\n"
            "#       D       #\n"
            "#################\n";
            break;

        case 3:
            std::cout <<
            "#################\n"
            "#   #######     #\n"
            "#      N        #\n"
            "#   #######     #\n"
            "#       D       #\n"
            "#################\n";
            break;

        case 4: 
            std::cout <<
            "#################\n"
            "#      C        #\n"
            "#    _____      #\n"
            "#   |     |     #\n"
            "#       D       #\n"
            "#################\n";
            break;

        case 5: 
            std::cout <<
            "#################\n"
            "#      $$$      #\n"
            "#       E       #\n"
            "#      $$$      #\n"
            "#################\n";
            break;

        default:
            std::cout << "Unknown location" << std::endl;
    }
}
void Location::showDescription()
{
    std::cout << "You are exploring a mysterious adventure world." << std::endl;
}
