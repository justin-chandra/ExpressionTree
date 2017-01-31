#include <iostream>
#include "Base.h"
#include "Op.h"
using namespace std;

class Div: public Base
{
	public:
		double x;
		double y;
		Div(Base * a, Base * b)
		{
			this->x = a->evaluate();
			this->y = b->evaluate();
		}
		virtual double evaluate()
		{
			return x / y;
		}

	private:
};
