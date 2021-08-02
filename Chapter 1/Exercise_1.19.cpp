#include <iostream>

int main(){
	// Get the range 
	std::cout << "Enter a range: ";
	int startingNumber = 0, endingNumber = 0;
	std::cin >> startingNumber >> endingNumber;
	
	// swap the values
	if(startingNumber > endingNumber){
		int temp = startingNumber;
		startingNumber = endingNumber;
		endingNumber = temp;
	}
	while(startingNumber <= endingNumber){
		std::cout << startingNumber++ << std::endl;
	}
	return 0;
}