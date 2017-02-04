#include <iostream>

using namespace std;


#ifndef SORT
#define SORT
class Container;
class Sort {
	public:
		/* Constructors */
		/* Pure Virtual Functions */
		virtual void sort(Container* container) = 0;
};

#endif
