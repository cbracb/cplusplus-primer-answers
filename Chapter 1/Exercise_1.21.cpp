#include <iostream>
#include "headers/Sales_item.h"

int main(){
	Sales_item item00;
	std::cout << "Enter first book info: ";
	std::cin >> item00;

	Sales_item item01;
	std::cout << "Enter second book info: ";
	std::cin >> item01;

	if(item00.isbn() == item01.isbn()){
		std::cout << item00 + item01 << std::endl;
	}else{
		std::cout << "Not the same ISBN" << std::endl;
	}

	return 0;
}