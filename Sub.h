#include <iostream>
#include "Base.h"
#include "Op.h"
using namespace std;

class Sub: public Base
{
	public:
		double x;
		double y; //subtract y from x
		
		Sub(Op * a, Op *b)
		{
			this->x = a->evaluate();
			this->y = b->evaluate();
		}		

		Sub(Base * a, Base * b)
		{
			this->x = a->evaluate();
			this->y = b->evaluate();
		}

		virtual double evaluate()
		{			
			return x - y;
		}
		

};
