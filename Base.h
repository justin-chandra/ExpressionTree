#include <iostream>

using namespace std;

class Base {
	public:
		/* Constructors */
		Base() { };
		/* Pure Virtual Functions */
		virtual double evaluate() = 0;
};
