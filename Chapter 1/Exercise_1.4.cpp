#include <iostream>

int main(){
	// print out "Enter a number"
	std::cout << "Enter a number: ";
	
	// create a variable
	int n1 = 0;
	
	// std::cin - console input
	// gets an input from the console and store it to the variable 'n1' 
	std::cin >> n1;

	// print out "Enter another number: "
	std::cout << "Enter another number: ";

	// create a variable
	int n2 = 0;

	// gets an input and store it to 'n2'
	std::cin >> n2;
	
	
	
	std::cout << n1  			// print out the value inside the variable 'n1'
			  << " + "  		// print out "+"
			  << n2  			// print out the value inside the variable 'n2'
			  << " = "			// print out " = "
			  << n1 + n2		// print out the values inside the summation of n1 and n2
			  << std::endl;		// end the line

	// the same as previous statement but multiplication  
	std::cout << n1 << " * " << n2 << " = " << n1 * n2 << std::endl;
	return 0;

}