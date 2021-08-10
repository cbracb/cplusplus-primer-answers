// int i = 0, &r1 = i; double d = 0, &r2 = d;

// (a) r2 = 3.14159; // valid; 'd' is now equal to 3.14159
// r2 = r1; // valid; 'd' is now equal to zero
// i = r2; // valid; 'i' is now equal to zero
// r1 = d; // valid 'i' is now equal to zero;