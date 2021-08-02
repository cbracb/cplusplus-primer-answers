#include <iostream>
#include "headers/Sales_item.h"

int main(){
	Sales_item mainItem, newItem;
	std::cin >> mainItem;
	while(std::cin >> newItem){
		if(newItem.isbn() == mainItem.isbn()){
			mainItem += newItem;	
		}else{
			std::cout << "\n" << mainItem << '\n' << std::endl;
			mainItem = newItem;
		}
	}

	return 0;
}