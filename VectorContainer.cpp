#include <iostream>
#include <vector>
#include <exception>
#include "VectorContainer.h"

using namespace std;

void VectorContainer::set_sort_function(Sort* sort_function)
{
	this->sort_function = sort_function; 	
	return;
}

void VectorContainer::add_element(Base* element)
{
	//push the top pointer of the tree into container
	
	return;
}

void VectorContainer::print()
{
 /*	try
	{
		if(sort_function == NULL)
		{
			throw nullSortException("Sorting Algorithm set to NULL");
		}
	}

	catch (const nullSortException& exception)
	{
		return;
	} */

	//iterate through tree and output values	
	return;
}

void VectorContainer::sort()
{
	//I'm guessing you sort with the specified sorting algorithm
	return;
}

void VectorContainer::swap(int i, int j)
{
	//get top ptr of tree at index i
	return;
}

//VectorContainer::Base* at(int i)
//{
	//return container size
//}

/*VectorContainer::int size()
{

} */
