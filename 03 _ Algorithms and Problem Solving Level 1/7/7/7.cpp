
#include <iostream>
#include <string>
using namespace std;

// أي عملية حسابية بتعملها بفنكشن لحالها حتى لو كانت سطر كود

int ReadNumber() 
{
	int Number;

	cout << "enter a number : " << endl;
	cin >> Number;
	return Number;
}

float CalculateHalfNumber(int Number) {
	return (float)Number / 2;
}

void PrintHalfNumber(int Number) {
	string Result = "Half of " + to_string(Number) + " is " + to_string(CalculateHalfNumber(Number));
	cout << Result << endl;
}

int main()
{
	PrintHalfNumber(ReadNumber());

	return 0;
}
