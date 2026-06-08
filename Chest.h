#ifndef CHEST_H
#define CHEST_H

class Chest{
public:
   int id;
   bool isLocked;
   int numPotions; 
   void open();
   void Checkpassword();
};
#endif 