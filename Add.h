#include <iostream>
#include "Base.h"
#include "Op.h"

using namespace std;

#ifndef ADD
#define ADD

class Add: public Base 
{
	public:
		double x;
		double y;
		Add(Base * a, Base * b)
		{
			this->x = a->evaluate();
			this->y = b->evaluate();
		}

		double evaluate()
		{
			return x + y;
		}
};

#endif
