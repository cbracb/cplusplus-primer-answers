#include <iostream>

int main(){
	// create two variables--
	// the 'summation' which holds the summated value, and
	// the 'count' which holds the value to be added
	int summation = 50, count = 50;
	
	// the expression 'count < 100' signifies that the while-loop will end if
	// the count value is 100
	while(count < 100){
		summation += ++count;
	}
	
	// printing the value inside 'summation'
	std::cout << "The Summation of 50 to 100 is " << summation << std::endl;
}