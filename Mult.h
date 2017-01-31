#include <iostream>
#include "Base.h"
#include "Op.h"

using namespace std;

class Mult: public Base
{
	public:
		double x;
		double y;
		
		Mult(Op * a, Op * b)
		{
			this->x = a->evaluate();
			this->y = b->evaluate();
		}	

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
