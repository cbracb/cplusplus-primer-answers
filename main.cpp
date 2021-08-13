int main(){
	int a = 0;
	const int *cptr = &a;
	int *const cptr00 = &a;
	const int *const cptr01 = &a;
}