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

int ReverseNumber(int Number) {
	int Reminder, Result = 0;
	while (Number > 0)
	{
		Reminder = Number % 10;
		Number = Number / 10;
		Result = (Result * 10 + Reminder);
	}
	return Result;
}

int main()
{
	cout << ReverseNumber(ReadPositiveNumber("Enter A positive integer"));
}