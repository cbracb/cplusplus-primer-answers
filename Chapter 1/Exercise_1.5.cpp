#include <iostream>

int main(){
	// everything here is just the same as the previous exercises however only
	// with separeted outputs
	std::cout << "Enter a number: ";
	int n1 = 0;
	std::cin >> n1;
	std::cout << "Enter another number: ";
	int n2 = 0;
	std::cin >> n2;

	std::cout << n1;
	std::cout << " + ";
	std::cout << n2;
	std::cout << " = ";
	std::cout << n1 + n2;
	return 0;
}