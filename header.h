#ifndef HEADER_H
#define _HEADER_H

#include <iostream>

// this will be optimize by the compiler
const int watermelon00 = 10;
// share across files without an initializer
// that means we can re-define 	it
// forces it to become declaration
extern const int watermelon;
void water();


#endif // _HEADER_H