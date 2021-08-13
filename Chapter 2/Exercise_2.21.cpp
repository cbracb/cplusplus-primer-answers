int i = 0;
double *dp = &i; // not the same type
int *ip = i; // not binding to an address (pointers store address)
int *p = &i; // valid