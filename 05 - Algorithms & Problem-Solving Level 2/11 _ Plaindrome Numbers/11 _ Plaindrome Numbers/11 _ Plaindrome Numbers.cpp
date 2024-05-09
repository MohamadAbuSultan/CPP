
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

int ReversedNumber(int Number) {
	int Reminder = 0, Result = 0;
	while (Number > 0)
	{
		Reminder = Number % 10;
		Number = Number / 10;
		Result = Result * 10 + Reminder;
	}
	return Result;
}

bool IsPlaindromNumber(int Number) {
	return Number == ReversedNumber(Number);
}

void PrintResult(int Number) {
	if (IsPlaindromNumber(Number)) { cout << Number << " is Plaindrom Number"; }
	else { cout << Number << " is not plaindrom number"; }
}
int main() 
{ 
	PrintResult(ReadPositiveNumber("Enter A Positive Number : "));
}
