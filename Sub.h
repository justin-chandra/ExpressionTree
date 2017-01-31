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
			this->x = x.evaluate();
			this->y = y.evaluate();
		}		

		Sub(Base * a, Base * b)
		{
			this->x = x.evaluate();
			this->y = y.evaluate();
		}

		virtual double evaluate()
		{			
			return x - y;
		}
		
	private:		

};
