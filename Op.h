#include <iostream>

using namespace std;

#include "Base.h"

#ifndef OP
#define OP

class Op
{
	public:
	double x;
		Op(int x)
		{
			this->x = x;
		}
		virtual double evaluate()
		{
			return x;
		}
};

#endif
