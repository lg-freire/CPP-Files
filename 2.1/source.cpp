#include <iostream>
using namespace std;

void callout() // whatever void means, this is a function creation
{
	cout << "Inside function callout()\n";
}

int main()
{
	cout << "Starting main()\n";
	callout(); // funtion used here
	cout << "Ending main()\n";

	return 0;
}