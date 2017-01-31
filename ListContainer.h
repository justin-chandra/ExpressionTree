#include <iostream>
#include <List>

using namespace std;

#include "Container.h"
#include "Base.h"

class ListContainer: public Container
{
	ListContainer() : sort_function(NULL) {};
	ListContainer(Sort * function) : sort_function(function) {};
	virtual void print();
	virtual void sort();
	virtual void swap(int i, int j);
	virtual Base * at(int i);
	virtual int size();
};
