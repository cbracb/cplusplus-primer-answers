#include <iostream>

int main(){
	std::cout  << "/*";
	std::cout << "*/";
	// std::cout << /* "*/" */;				// wrong
	std::cout << /* "*/" /* "/*" */ ;
}