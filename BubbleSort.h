#include <iostream>
#include "Sort.h"

using namespace std;

#ifndef B
#define B

class Container;
class BubbleSort: public Sort
{
	public:

		BubbleSort()
		{

		}

		void sort(Container * container)
		{
			int flag = 1; //flag is set to 1 to begin first pass
			int holder = 0; //holds variable
			int size = container->size(); //length of Vector

			for (int i = 1; (i <= size) && flag; ++i)
			{
				flag = 0;
			   	for (int j = 0; j < size; ++j)
			   	{	
			   		if (container->at(j + 1) > container->at(j))
			   		{
						//holder = container->at(j);
						//container->at(j) = container->at(j + 1);
						//container->at(j + 1) = holder;
						//swap(j, j + 1);
						flag = 1; //swap has occured
					}
				} 
			}
		
		}

};

#endif
