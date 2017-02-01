#include <iostream>

using namespace std;

#include "Sort.h"

class Container;
class SelectionSort: public Sort 
{
	public:
		SelectionSort()
		{

		}
		
		void sort(Container * container)
		{

			int i, j, first, temp;
			int numLength = container.size();
			for (i = numLength - 1; i > 0; i--)
			{
				first = 0;             
				for (j=1; j<=i; j++)  
				{
					if (num[j] < num[first])
						first = j;
				}
				container.swap(first, i);
			}
		}
};
