#include <iostream>

int i = 42;
int main(){
	int i = 100;
	int j = i; // the value is 100 since the global scope 'i' is now hidden because of the local definition
	return 0;
}