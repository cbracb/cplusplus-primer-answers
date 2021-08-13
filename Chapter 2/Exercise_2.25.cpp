// 'ip' is a pointer; 'r' is a reference to an 'int' which makes &r = ip invalid
// (unless you put a dereference operator)
int *ip, &r = ip;

// 'i' is an int; 'ip' is a pointer to an int;
int i, *ip = 0;

// 'ip' is a pointer to an int; 'ip2' is a int;
int *ip, ip2;