#include <iostream>

using namespace std;

#include "Add.h"
#include "Base.h"
#include "Div.h"
#include "Mult.h"
#include "Op.h"
#include "Sqr.h"
#include "Sub.h"
#include "Container.h"
#include "ListContainer.h"
#include "Sort.h"
#include "VectorContainer.h"

#include "Ceil.h"
#include "Floor.h"
#include "Abs.h"
//#include "SelectionSort.h"
//#include "BubbleSort.h"

int main() {
	Op* op7 = new Op(7);
	Op* op4 = new Op(4);
	Op* op3 = new Op(3);
	Op* op2 = new Op(2);
	Mult* A = new Mult(op7, op4);
	Add* B = new Add(op3, A);
	Sub* C = new Sub(B, op2);
	Sqr* D = new Sqr(C);
	
	cout << D->evaluate() << endl;

	//ListContainer * container = new ListContainer();
	VectorContainer * container = new VectorContainer();
	container->add_element(A);
	container->add_element(B);
	container->add_element(C);
	container->add_element(D);
	cout << "Container Before Sort: " << endl;
	container->print();
	cout << "Container After Sort: " << endl;
	container->set_sort_function(new SelectionSort());
	//BubbleSort * b = new BubbleSort();
	//container->set_sort_function(new BubbleSort());
	container->sort();
	container->print();
	/*
	Op * op1 = new Op(1.6);
	Op * op2 = new Op(1.3);
	Op * op3 = new Op(-1.0);

	Floor * f1 = new Floor(op1);
	cout << f1->evaluate() << endl;

	Ceil * c2 = new Ceil(op2);
	cout << c2->evaluate() << endl;

	Abs * abs3 = new Abs(op3);
	cout << abs3->evaluate() << endl;
	*/
	return 0;
};
