#include <iostream>

/*
int x; // define variable X as type int
double width; // define variable "width" as type double
int a, b; // define variables A and B as type int in one line
int a; double b; // define two variables as different types, same line (not recommended)
// correct way to define two variables (just have them in separate lines)
int a;
double b;
*/

int main()
{
	int width; // variable width is of the int type
	width = 5;
	int girth = 3;		// girth assigned value in the same line as the type
	int height(3);		// works this way too
	int weight{ 15 };	// and this way
}
