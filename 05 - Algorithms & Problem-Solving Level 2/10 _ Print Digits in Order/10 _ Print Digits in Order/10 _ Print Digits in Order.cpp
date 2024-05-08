#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message){
	int Number;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

int ReversedOrder(int Number){
	int Reminder = 0, Result = 0;
	while (Number > 0)
	{
		Reminder = Number % 10;
		Number = Number / 10;
		Result = Result * 10 + Reminder;
	}
	return Result;
}

void DigitInOrder(int Number) {
	int Reminder = 0;
	while (Number > 0)
	{
		Reminder = Number % 10;
		Number = Number / 10;
		cout << Reminder << endl;
	}
}

int main()
{
	DigitInOrder(ReversedOrder(ReadPositiveNumber("M")));
}
