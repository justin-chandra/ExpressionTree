#include <iostream>
#include <stdexcept>

using namespace std;

#include "ListContainer.h"

ListContainer::ListContainer()
{

}

ListContainer::ListContainer(Sort * function)
{
	this->sort_function = function;
}

void ListContainer::add_element(Base * element)
{
	tree.push_back(element);
}

void ListContainer::print()
{
		
}

void ListContainer::sort()
{
	if (sort_function == NULL) 
	{
		throw runtime_error("sort_function is null");
	}
}

void ListContainer::swap(int i, int j)
{

}

Base * ListContainer::at(int i)
{
	return NULL;
}

int ListContainer::size()
{
	return tree.size();
}

