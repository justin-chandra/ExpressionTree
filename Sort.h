#include <iostream>

using namespace std;


#ifndef SORT
#define SORT
class Container;
class Sort {
	public:
		/* Constructors */
		Sort();
		/* Pure Virtual Functions */
		virtual void sort(Container* container) = 0;
};

#endif
