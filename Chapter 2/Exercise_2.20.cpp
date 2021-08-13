int main(){
	int i = 42; // create a variable
	int *p1 = &i; // bind 'p1' to 'i';
	// the value pointed by 'p1' will be equal to the value pointed by 'p1'
	// multiply by itself
	// (*p1 *= *p1)
	*p1 = *p1 * *p1;
}