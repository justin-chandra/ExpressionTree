#include <iostream>

using namespace std;

#include "Base.h"

#ifndef OP
#define OP

class Op: public Base
{
	public:
	double x;
		Op(double x)
		{
			this->x = x;
		}
		virtual double evaluate()
		{
			return x;
		}
};

#endif
