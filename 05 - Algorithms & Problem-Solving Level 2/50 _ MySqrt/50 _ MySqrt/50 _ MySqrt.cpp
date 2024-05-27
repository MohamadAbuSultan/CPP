#include <iostream>

using namespace std;

int MySqrt(int number) {
	return pow(number, 0.5);
}

int main()
{
	cout << MySqrt(25);
}