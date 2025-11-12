#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"


class Mammal : public Animal {
    private:
    string furColor;
    
    public:
    Mammal() : Animal(){
        furColor = "white";
    }
    
    Mammal(string s, string l, int a, bool f) : Animal(l, a, f){
        furColor = s;
    }
    ~Mammal(){}
};

#endif
