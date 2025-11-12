#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"


class Bird : public Animal {
private:
	int wingSpan;

public:
	Bird() : Animal() {
		wingSpan = 0;
	}

	Bird(int s, string l, int a, bool f) : Animal(l, a, f) {
		 wingSpan = s;
	}
	
	 ~Bird(){}

}

#endif
