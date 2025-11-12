/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include "Animal.h"
#include "Visitor.h"
#include "Enclosure.h"
#include "Reptile.h"
#include "Bird.h"
#include "Mammal.h"

using namespace std;

int main()
{
    
    Animal a("Lion", 5, true);
    Animal b("Parrot", 2, false);
    Animal c("Snake", 3, true);
    
    
    //Reptile c(true, "Snake", 3, true);
    
    Enclosure e(&a, 5, 0);
    
    Mammal m("Wool", "Lion", 5, true);
    Bird bb(10, "Parrot", 2, false);
    Reptile cc(false, "Snake", 3, true);
    
    e.addAnimal(a);
    e.addAnimal(b);
    e.addAnimal(c);
    
    Visitor();
    
    m.display();
    e.displayAnimals();
    return 0;
};
