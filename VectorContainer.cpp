#include <iostream>
#include <vector>
#include <exception>
#include "VectorContainer.h"

using namespace std;

VectorContainer::VectorContainer()
{

}

VectorContainer::VectorContainer(Sort* function)
{

}

void VectorContainer::set_sort_function(Sort* sort_function)
{
	this->sort_function = sort_function; 	
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
	//take a look at swap(), google it
}

VectorContainer::Base* at(int i)
{
	return NULL;
}

VectorContainer::int size()
{
	return 0;
}
