#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"


class Enclosure {
    private:
    Animal* animal;
    int capacity;
    int currentCount;
    
    public:
    Enclosure() {
        animal = nullptr;
        capacity = 0;
        currentCount = 0;
    }
    
    Enclosure(Animal* a, int c, int cc){
        animal = a;
        capacity = c;
        currentCount = cc;
    }
    
    
    ~Enclosure(){
        delete [] animal;
    }
    
    void addAnimal(Animal& a) {
        if(currentCount<capacity){
            animal[currentCount++] = a;
        }}
        
    void displayAnimals() {
        for(int i = 0; i<currentCount; i++){
            animal[i].display();
        }
    }
};

#endif
