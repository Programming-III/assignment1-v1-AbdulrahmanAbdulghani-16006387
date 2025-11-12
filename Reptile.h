#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"


class Reptile : public Animal {
    private:
    bool isVenemous;
    
    public:
    Reptile() : Animal(){
        isVenemous = false;
    }
    
    Reptile(bool s, string l, int a, bool f) : Animal(l, a, f){
        isVenemous = s;
    }
    
    ~Reptile(){}
    
};

#endif
