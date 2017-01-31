#include <iostream>

using namespace std;

#include "Base.h"
#include "Op.h"

class Sqr: public Base
{
	public:
		double x;
		Sqr(Base * a)
		{
			this->x = a->evaluate();
		}

		virtual double evaluate()
		{ 
			return x * x;
		}

};
