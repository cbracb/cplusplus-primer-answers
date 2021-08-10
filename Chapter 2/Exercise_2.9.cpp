// std::cin >> int input_value;
/// you need an object succeeding the right shift operand
/// not a declaration of variable
/** 
 * int input_value = 0;
 * std::cin >> input_value;
**/

// int i = {3.14};
/// The compiler doesn't allow us initialize a certain data to a certain type 
/// if there might be a possible of data lose if you use a list initialization.
/**
 * int i = {3};
 * // or
 * double i = {3.14}; 
**/


// double salary = wage = 9999.99;
/// there is no problem here provided that 'wage' is already constructed
/// if not, then there is a problem.
/**
 * // 1st solution
 * double wage = 9999.99;
 * double salary = wage;
 * 
 * // 2nd solution
 * double wage = 0;
 * double salary = wage = 9999.99; 
 *
 * 
**/

// int i = 3.14;
/// in all honesty you can compile this but the value will be truncated
/**
 * double i = 3.14;
**/
