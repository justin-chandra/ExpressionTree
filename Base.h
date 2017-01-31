#include <iostream>

using namespace std;

#ifndef BASE
#define BASE

class Base {
	public:
		/* Constructors */
		Base() { };
		/* Pure Virtual Functions */
		virtual double evaluate() = 0;
};

#endif
