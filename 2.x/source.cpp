#include <iostream>

int readNumber();

void writeAnswer(int n);

int main()
{
	int a{ readNumber() };
	int b{ readNumber() };

	writeAnswer(a + b);

	return 0;
}