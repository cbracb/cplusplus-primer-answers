// i = ic' // legal, we are not changing 'ic' so it's permitted
// p1 = p3; // cannot bind a non-const to a const
// p1 = &ic; // cannot point a non const to a const
// p3 = &ic; // invalid; p3 has a const pointer
// p2 = p1; p2 is a constant pointer, so we can't change the value it's pointed to
// ic = *p3; // valid; we didn't manipulate anything on p3

