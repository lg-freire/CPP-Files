#include <iostream>

// iostream deals with basic input and output
int main()
{
	std::cout << 4; // print the number 4
	int x{ 5 };
	std::cout << x; // prints the variable x
	std::cout << "Hello" << "world!"; // concatenates both values to be printed in the same line
	std::cout << "The value of x is: " << x;
	std::cout << "First line" << std::endl; // std::endl skips to the next line, AS THIS WILL NOT BE DONE AUTOMATICALLY
	std::cout << "Second line" << std::endl; // finish prints with endl command
	int y{ 12 };
	std::cout << "Y equals " << y << '\n'; // \n works here too
	std::cout << "BREAK!\n"; // also works inside the string
	return 0;
}