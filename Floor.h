#include <iostream>
#include <cmath>
#include "Base.h"
#include "Op.h"

using namespace std;

class Floor: public Base
{
	public:
		double x;
		Floor(Base * a)
		{
			this->x = a->evaluate();
		}

		double evaluate()
		{
			return floor(x);
		}



};

