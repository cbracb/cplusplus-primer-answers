// u2 - u --> produces 32
// u - u2 --> produces (assuming in 32 bit) 2E32 - 32

// i2 - i --> produces 32
// i - i2 --> produces -32

// i - u --> produces 0
// u - i --> produces 0

#include <iostream>

int main(){
	int 	  prediction00 = 32,
			  prediction01 = 4294967264, // 2E32 - 32
			  prediction02 = 32,
			  prediction03 = -32,
			  prediction04 = 0,
			  prediction05 = 0;
	unsigned  u  		   = 10,
			  u2 		   = 42;
	int 	  i  		   = 10,
	  		  i2 		   = 42;
	std::cout << "Prediction00: " << std::boolalpha << (prediction00 == u2 - u) << std::endl;
	std::cout << "Prediction01: " << std::boolalpha << (prediction01 == u - u2) << std::endl;
	std::cout << "Prediction02: " << std::boolalpha << (prediction02 == i2 - i) << std::endl;
	std::cout << "Prediction03: " << std::boolalpha << (prediction03 == i - i2) << std::endl;
	std::cout << "Prediction04: " << std::boolalpha << (prediction04 == i - u) << std::endl;
	std::cout << "Prediction05: " << std::boolalpha << (prediction05 == u - i) << std::endl;
	std::cout << (-32 % UINT32_MAX) << std::endl;
}