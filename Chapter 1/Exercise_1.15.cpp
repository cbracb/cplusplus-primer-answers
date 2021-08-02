/*
write programs that contain the common errors discusses in the box on page 16.
failiarize yoruself with the message the compier generate
*/


// syntax error
#include <iostream>

int main(){
	std::cout << "watermelon" // forgetting semicolon
}

int main(){
	std:;cout << "watermelon"; // using semicolon instead of colon
}

int main(){
	int a = 0;
	std::cin << a; // wrong operator 
}

int main(){
	int a = 0 b = 2; // forgetting comma
}

int main(){
	// type error
	int a = 0;
	std::cout << watermelon; // forgot double quotation for a string literal
	std::cout << a;
}

int main(){
	dtd::cout << "watermelon"; // declaration error
}
