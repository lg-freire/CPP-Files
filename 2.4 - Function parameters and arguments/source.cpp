#include <iostream>
using namespace std;

// This function returns a simple int input and requires no parameters
int getValue()
{
	cout << "Enter an integer: ";
	int input{};
	cin >> input;

	return input;
}

// This function prints the given number (argument) doubled, and returns nothing
void printDouble(int value) // Same as Python, really
{
	cout << value << " doubled is " << value * 2 << ".\n";
}

int main()
{
	printDouble(getValue()); // Functions that have a return value can be used directly as arguments for other functions

	return 0;
}