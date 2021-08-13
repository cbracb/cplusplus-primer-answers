#include <iostream>

int main(){;
	int a = 10, b = 20, c = 30;
	int *ptrA = &a,
		*ptrB = &b,
		*ptrC = &c;
	
	// print address
	std::cout << ptrA << std::endl;
	std::cout << ptrB << std::endl;
	std::cout << ptrC << std::endl;
	std::cout << "--------------------" << std::endl;
	
	ptrA = ptrB; // change the underlying address
	std::cout << ptrA << std::endl; // it should have the same address at 'ptrB'
	std::cout << *ptrA << std::endl; // print out the value

	// change the underlying value
	*ptrA = 50; 
	std::cout << *ptrA << std::endl; // should be 50
	std::cout << *ptrB << std::endl; // should be 50
}