#include <iostream>

using namespace std;

float ReadNumber(string message)
{
	float number;
	cout << message << " ";
	cin >> number;
	return number;
}

float AbsoluteFunction(float number)
{
	if (number < 0) 
		number *= -1;
	return number;
}

int main()
{
	float number = ReadNumber("Enter A Number: ");

	cout << "\nAbsolute Function: " << AbsoluteFunction(number);

	cout << "\n\nAbs Function: " << abs(number);

	cout << endl;
}