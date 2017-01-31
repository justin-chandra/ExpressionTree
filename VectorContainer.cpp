#include <iostream>
#include <vector>
#include <exception>
#include "Base.h"
#include "VectorContainer.h"

using namespace std;

void set_sort_function(Sort* sort_function)
{
	this->sort_function = sort_function; 	
	return;
}

virtual void add_element(Base* element)
{

}

virtual void print()
{
	try
	{
		if(sort_function == NULL)
		{
			throw nullSortException("Sorting Algorithm set to NULL");
		}
	}

	catch (const nullSortException& exception)
	{
		return;
	}

	


}

virtual void sort()
{


}

virtual void swap(int i, int j)
{

}

virtual Base* at(int i)
{

}

virtual int size()
{

}
