#include <iostream>
#include <cmath>

using namespace std;

#include "Base.h"
#include "Op.h"

class Abs: public Base
{
	public:
		double x;
		Abs(Base * a)
		{
			this->x = a->evaluate();
		}

		double evaluate()
		{
			return abs(x);
		}
};
