#include <iostream>
#include <vector>
#include "Base.h"
#include "Container.h"
#include "Sort.h"

using namespace std;

class VectorContainer: public Container
{
	protected:
		Sort* sort_function;

	public:
	vector<Base*> v;
	//Constructors
	VectorContainer();
	VectorContainer(Sort* function); // set the type of sorting algorithm

	//Non Virtual functions
	void set_sort_function(Sort* sort_function); // set the type of sorting algorithm

	//Pure Virtual Functions 
	//push the top pointer of the tree into container
	void add_element(Base* element);
	
	//iterate through trees and output values
	void print();

	//calls on previously set sorting algorithm. Checks if sort_function is not null, throw exception if otherwise
	void sort();
	
	//Essentially the only functions needed to sort 
	//switch tree locations
	void swap(int i, int j);
	
	//get top ptr of tree at index i
	Base* at(int i);
	
	//return container size
	int size();
};
