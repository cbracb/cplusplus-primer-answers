#include <iostream>
#include "headers/Sales_item.h"

// each books computes
// - the number of copies sold
// - total revenue
// - average sales price

// 0-201-70353-X 4 24.99
// - ISBN
// - the number of copies sold
// - price at which each of these copies was sold

int main(){
	std::cout << "Enter a transaction: " << std::endl;
	Sales_item startingItem;
	std::cin >> startingItem;

	Sales_item nextItem;
	while(std::cin >> nextItem){
		if(startingItem.isbn() == nextItem.isbn()){
			// since the revenue is already calculated for each input, we should
			// only need to add them
			startingItem += nextItem;
		}else{
			// print all the information in the object
			std::cout << startingItem;
			// print the average price
			std::cout << ' '<< startingItem.avg_price() << std::endl;
			startingItem = nextItem;
		}
	}
	// print the last transaction
	std::cout << startingItem << std::endl;
	return 0;
}