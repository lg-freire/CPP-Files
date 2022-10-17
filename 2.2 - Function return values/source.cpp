#include <iostream>
using namespace std;

int userInput() // function returns an integer value, this has to be defined at the start rather than inside the function
{
	cout << "Enter an integer: ";
	int input{}; // remember to declare variables before input
	cin >> input;

	return input; // as an int, as declared at the start
}

int main()
{
	int num{ userInput() }; // if function already returns an int value, could just use that in the output print?

	cout << num << " doubled is " << num * 2 << '\n';

	return 0;

}