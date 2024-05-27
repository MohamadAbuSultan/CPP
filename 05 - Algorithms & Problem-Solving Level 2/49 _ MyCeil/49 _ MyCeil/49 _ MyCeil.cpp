#include <iostream>

using namespace std;

float FractionPart(float number) {
	return number - (int)number;
}

int MyCeil(float number) {
	float fractionNumber = FractionPart(number);

	if (abs(fractionNumber) > 0 && number > 0)
		return (int)++number;
	return (int)number;
}

int main()
{
	cout << MyCeil(1.5) << endl; 
	cout << MyCeil(-0.5) << endl;
	cout << MyCeil(-1.5) << endl;
}