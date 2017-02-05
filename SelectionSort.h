#include <iostream>

using namespace std;
#include "Sort.h"

#ifndef SS
#define SS

class Container;
class SelectionSort: public Sort 
{
	public:
		SelectionSort()
		{

		}

		void sort(Container * container)
		{
			int i = 0;
			int j = 0;
			int first = 0;
			int size = container->size();
			for (i = size - 1; i > 0; i--)
			{
				first = 0;             
				for (j = 1; j <= i; j++)  
				{
					if (((container->at(j))->evaluate()) < ((container->at(first))->evaluate()))
					{
						first = j;
					}
				}
				container->swap(first, i);
			}
		}
};

#endif
