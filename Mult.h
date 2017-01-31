#include <iostream>
#include "Base.h"
#include "Op.h"

using namespace std;

class Mult: public Base
{
	public:
		double x;
		double y;
		
		Mult(Base * x, Base * y)
		{
			this->x = x->evaluate();
			this->y = y->evaluate();			
		}

		virtual double evaluate()
		{
			return x * y;
		}
	private:

};
