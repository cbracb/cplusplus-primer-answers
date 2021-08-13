// (a) int i = - 1, &r = 0;			// &r is not valid; can't bind a reference to a literal
// (b) int *const p2 = &i2;			// valid
// (c) const int i = -1, &r = 0;    // valid; we can find a reference to a literal if its a const
// (d) const int *const p3 = &i2;	// valid
// (e) const int *p1 = &i2;			// valid
// (f) const int &const r2;			// invalid; only if not in global scope
// (g) const int i2 = i, &r = i;	// valid
