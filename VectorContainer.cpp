#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>
#include "VectorContainer.h"
#include "Sort.h"
#include "BubbleSort.h"

using namespace std;

VectorContainer::VectorContainer()
{

}

VectorContainer::VectorContainer(Sort* function)
{
	//set the sort function in this an list 
	this->sort_function = function;
}

void VectorContainer::set_sort_function(Sort* sort_function)
{
	this->sort_function = sort_function; 	
}

void VectorContainer::add_element(Base* element)
{
	v.push_back(element);
}

void VectorContainer::print()
{
	//iterate through tree and output values	
	for(unsigned i = 0; i < v.size(); ++i)
	{
		//formatting
		//i = child, i + 1 = bottom/left child, i + 2 = top/right child
		cout << v.at(i)->evaluate() << " ";
	}	
	cout << endl;	
}

void VectorContainer::sort()
{
	//I'm guessing you sort with the specified sorting algorithm
	if (sort_function == NULL)
	{
		throw runtime_error("sort_function is null");
	}
	this->sort_function->sort(this);
}

void VectorContainer::swap(int i, int j)
{
	//take a look at swap(), google it
	Base * temp = v.at(i);
	v.at(i) = v.at(j);
	v.at(j) = temp;
}

Base * VectorContainer::at(int i)
{
	return v.at(i);
}

int VectorContainer::size()
{
	return v.size();
}
