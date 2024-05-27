#include <iostream>

using namespace std;

float ReadNumber() {
	float number;
	cin >> number;
	return number;
}

float FractionPart(float number){
	return number - (int)number;
}

int MyFloor(float number) {
	float fractionPart = FractionPart(number);
	
	int number2 = (int)number;

	if (number > 0)
		return number2;
	else if (abs(fractionPart) >= 0.1)
		return --number2;
	return number2;
}

int main()
{
	cout << MyFloor(ReadNumber());
}