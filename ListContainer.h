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
	ListContainer();
	ListContainer(Sort * function);
	void print();
	void sort();
	void swap(int i, int j);
	Base * at(int i);
	int size();
};
