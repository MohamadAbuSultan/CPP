
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

int CalculateSumOfDigits(int Number) {
	int Sum = 0;
	int Reminder;
	while (Number > 0)
	{
		Reminder = Number % 10;
		Number = Number / 10;
		Sum = Sum + Reminder;
	}
	return Sum;
}

int main()
{
	cout << CalculateSumOfDigits(ReadPositiveNumber("Enter A Positive Integer"));
}
