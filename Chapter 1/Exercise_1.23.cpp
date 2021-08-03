#include <iostream>
#include "headers/Sales_item.h"
int main(){
	std::cout << "Enter a transaction " << std::endl;
	Sales_item sItem;
	std::cin >> sItem;

	int count = 1; // deafult to 1 to count the first input
	Sales_item lItem;
	while(std::cin >> lItem){
		if(sItem.isbn() == lItem.isbn()){
			++count;
		}else{
			std::cout << sItem.isbn() << " haver " << count << " transaction" << std::endl;
			sItem = lItem;
			count = 0;
		}
	}
	return 0;
}