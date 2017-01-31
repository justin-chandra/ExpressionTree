#include <iostream>
#include <List>

using namespace std;

#include "Container.h"
#include "Sort.h"
#include "Base.h"

class ListContainer: public Container
{
	protected:
	Sort * sort_function;
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
