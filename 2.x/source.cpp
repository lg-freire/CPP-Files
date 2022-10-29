#include <iostream>

int readNumber() {
	int n{};
	std::cin >> n;

	return n;
}

void writeAnswer(int n) {
	std::cout << n << '\n';
}

int main()
{
	int a{ readNumber() };
	int b{ readNumber() };

	writeAnswer(a + b);

	return 0;
}