#include <iostream>
#include <cmath>
#include "Base.h"
#include "Op.h"
using namespace std;

class Ceil: Base public
{
	public:
		double x;
		Ceil(Base * a)
		{
			this->x = a->evaluate();
		}

		double evaluate()
		{
			return ceil(x);
		}

};
