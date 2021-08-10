#include <iostream>

int main(){
	int i = 100, sum = 0;
	for(int i = 0; i != 10; ++i){ // local definition of 'i'
		sum += 1;
	}

	// print-out 100 (i)
	// print-out 10 (sum)
	std::cout << i << " " << sum << std::endl;
	return 0;

}
