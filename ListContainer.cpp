#include <iostream>
#include <stdexcept>
#include <List>

using namespace std;

#include "ListContainer.h"
#include "SelectionSort.h"
#include "Sort.h"
#include "Base.h"
/*
#include "Add.h"
#include "Sub.h"
#include "Div.h"
#include "Mult.h"
#include "Op.h"
#include "Sqr.h"
*/

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
	for (list<Base*>::iterator it = tree.begin(); it != tree.end(); ++it)
	{
		cout << (*it)->evaluate() << endl;
	}
}

void ListContainer::sort()
{
	if (this->sort_function == NULL) 
	{
		throw runtime_error("sort_function is null");
	}
}

void ListContainer::swap(int i, int j)
{
	cout << "stuff" << endl;	
}

Base * ListContainer::at(int i)
{
	for (list<Base*>::const_iterator iterator = tree.begin(); iterator != tree.end(); ++iterator)
	{
		int j = 0;
		if (i == j)
		{
			return *iterator;
		}	
		++i;
	}
	return NULL;
}

int ListContainer::size()
{
	return tree.size();
}

