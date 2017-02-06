#include <iostream>
#include <list>

using namespace std;

#include "Container.h"
#include "Sort.h"
#include "Base.h"
#include "SelectionSort.h"
#include "BubbleSort.h"

#ifndef L
#define L

class ListContainer: public Container
{
	public:
	list<Base*>tree;
	ListContainer();
	ListContainer(Sort * function);
	void add_element(Base * element);
	void print();
	void sort();
	void swap(int i, int j);
	Base * at(int i);
	int size();
};

#endif
