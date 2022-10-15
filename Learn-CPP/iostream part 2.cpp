#include <iostream>

int main()
{
	std::cout << "Enter a number:\n"; // simple print

	int x{ }; // variable needs to be declared first, apparently
	std::cin >> x; // get integer value from keyboard, store on 'x' memory space

	std::cout << "You entered " << x << '\n'; // resolution
	return 0;
}