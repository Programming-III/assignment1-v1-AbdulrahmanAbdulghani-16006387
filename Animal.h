#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <string>
using namespace std;


class Animal{
    
    private:
    string name;
    int age;
    bool isHungry;
    
    public:
    Animal(){
        name = "Lion";
        age = 0;
        isHungry = false;
    }
    
    Animal(string s, int a, bool i){
        name = s;
        age = a;
        isHungry = i;
    }
    
    ~Animal(){}
    
    virtual void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "isHungry: " << isHungry << endl;
    }
    
    void feed(){
        cout << isHungry << endl;
    }
    
};


#endif
