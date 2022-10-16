#include <iostream>
using namespace std;

int main()
{
	cout << "Enter an integer: "; //no line break at the end so input is in the same line

	int num{};
	cin >> num; // is it impossible to declare and input for a variable in the same line in C++?????

	// input enter takes care of the line break
	cout << "Double that number is " << num * 2 << ".\n"; // preferred to make print only calculus in the print line instead of creating a variable
	cout << "Triple that number is " << num * 3 << ".\n"; //no multi-line prints either?
	return 0;
}