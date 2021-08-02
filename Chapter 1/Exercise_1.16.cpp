#include <iostream>

int main(){ // my own bad version haha
	int summation = 0;
	for(int val = 0;std::cin >> val;){
		summation += val;
	}
	std::cout << summation << std::endl;
}