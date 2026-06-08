#ifndef LOCATION_H
#define LOCATION_H
#include <string>
class Location {
    public:
    int id;
    std::string name;
    bool hasChest;
    bool isOpen;
    void showmap();
    void showDescription();
};
#endif
