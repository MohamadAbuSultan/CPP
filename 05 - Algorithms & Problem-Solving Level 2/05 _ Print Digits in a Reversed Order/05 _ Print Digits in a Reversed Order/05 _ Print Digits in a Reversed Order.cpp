#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message) {
	int Number;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

void PrintDigitsInReverseOrder(int Number) {
	int Result = 1;
	while (Number > 0)
	{
		Result = Number % 10;
		Number = Number / 10;
		cout << Result << endl;
	}
}

int main()
{
	PrintDigitsInReverseOrder(ReadPositiveNumber("Enter A Positive Number"));
}