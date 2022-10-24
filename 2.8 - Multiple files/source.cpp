#include <iostream>

int add(int x, int y); // this is a FORWARD STATEMENT for a function either defined after main() or in another .cpp file inside the project

int main()
{
	std::cout << "The sum of 3 and 4 is " << add(3, 4) << '\n';
	return 0;
}