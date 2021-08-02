#include <iostream>

int main(){
	/* Previous Code
		int sum = 0, val = 1;
		while(val <= 10){
			sum += val;
			++val
		}
	*/

	// new code
	int sum = 0;
	for(int i = 1; i <= 10; ++i){
		sum+=i;
	} 
	std::cout << sum << std::endl;
	return 0;
}