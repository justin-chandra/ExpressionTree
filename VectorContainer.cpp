#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>
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
	v.push_back(element);
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
	for(int k = i; k < v.size() - 2; ++i)
	{
		//formatting
		//i = child, i + 1 = bottom/left child, i + 2 = top/right child
		
		
	}		
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
	//swap(v[i], v[j]);
	return;
}

Base * VectorContainer::at(int i)
{
	return v.at(i - 1);
}

int VectorContainer::size()
{
	return v.size();
}
