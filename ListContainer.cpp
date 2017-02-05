#include <iostream>
#include <stdexcept>
#include <List>
#include <algorithm>

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
		cout << (*it)->evaluate() << " ";
	}
	cout << endl;
}

void ListContainer::sort()
{
	if (this->sort_function == NULL) 
	{
		throw runtime_error("sort_function is null");
	}
	sort_function->sort(this);
}

/*
void ListContainer::swap(int i, int j)
{
	list<Base*>::const_iterator iterator = tree.begin();
	while ((*iterator)->evaluate() != i)
	{
		++iterator;	
	}

	list<Base*>::const_iterator it = tree.begin();
	while ((*it)->evaluate() != j)
	{
		++it;
	}
}
*/
Base * ListContainer::at(int i)
{
	list<Base*>::iterator it = tree.begin();
	for (unsigned j = 0; j < i; ++j)
	{
		++it;
	}
	return *it;
}

void ListContainer::swap(int i, int j)
{	
	int k = 0;
	int l = 0;
	list<Base*>::iterator first = tree.begin();
	list<Base*>::iterator second = first;
	while (k < i)
	{
		++k;
		++first;	
	}
	while (l < j)
	{
		++l;
		++second;
	}
	iter_swap(first, second);
}

int ListContainer::size()
{
	return tree.size();
}

