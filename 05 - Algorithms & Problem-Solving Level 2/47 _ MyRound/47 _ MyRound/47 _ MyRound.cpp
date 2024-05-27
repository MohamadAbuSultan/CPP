#include <iostream>

using namespace std;

float ReadNumber(string message) {
	float number;
	cout << message << " ";
	cin >> number;
	return number;
}

float MyRound(float& number) {
	float reminder = ((int)number % 10) * 10;
	
	if (reminder >= 5)
		return number + 1;
	return number;
}

int main()
{
	float number = ReadNumber("Enter Number");

	cout << MyRound(number);
}