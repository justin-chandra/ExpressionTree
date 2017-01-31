#include <iostream>
#include "Base.h"
#include "Op.h"

using namespace std;

class Add: public Base 
{
	public:
		/*
		Add()
		{

		}
		*/
		Add(Base * a, Base * b)
		{

		}

		virtual double evaluate()
		{
			return 0;
		}
};
