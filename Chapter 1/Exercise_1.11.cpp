#include <iostream>

int main(){
	std::cout << "Enter a starting number: ";
	int startingNumber = 0;
	std::cin >> startingNumber;
	std::cout << "Enter ending number: ";
	int endingNumber = 0;
	std::cin >> endingNumber;
	while(startingNumber <= endingNumber){
		std::cout << startingNumber++ << std::endl;
	}
	return 0;
}