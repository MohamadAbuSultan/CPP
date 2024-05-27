#include <iostream>

using namespace std;

float ReadNumber(string message) {
	float number;
	cout << message << " ";
	cin >> number;
	return number;
}

float GetFractionPart(float number) {
	return number - (int)number;
}

float MyRound(float number) {
	int intPart = (int)number;

	float fractionPart = GetFractionPart(number);

	if (abs(fractionPart) >= 0.5)
		if (number > 0)
			return ++intPart;
		else
			return --intPart;
	else 
		return intPart;
}

int main()
{
	float number = ReadNumber("Enter Number");
	
	cout << "Round Function: " << round(number) << endl;
	cout << "My Round Function: " << MyRound(number);
}