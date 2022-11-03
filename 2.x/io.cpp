#include "io.h" // custom #includes first, system #includes after
#include <iostream>

int readNumber() {
	std::cout << "Enter a number: ";
	int n{};
	std::cin >> n;

	return n;
}

void writeAnswer(int n) {
	std::cout << "The answer is " << n << '\n';
}