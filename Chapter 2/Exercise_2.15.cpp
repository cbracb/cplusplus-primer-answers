// (a) int ival = 1.01; // valid by the value is truncated
// (b) int &rval1 = 1.10; // not valid; reference can't be bound to a literal
// (c) int &rval2 = ival; // valid
// (d) int &rval3; // invalid; reference should be initialize