#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

int CountDigitFrequency(short NumberToCheck, int Number)
{
	int Reminder = 0, Sum = 0;
	while (Number > 0)
	{
		Reminder = Number % 10;
		Number = Number / 10;
		if (Reminder == NumberToCheck) Sum += 1;
	}
	return Sum;
}

void PrintAllDigitFreqency(int Number) {
	for (short i = 0; i < 10; i++)
	{
		short DigitFreqency = 0;
		DigitFreqency = CountDigitFrequency(i, Number);
		if (DigitFreqency > 0)	
			cout << "Digits " << i << " Freqency is : " << DigitFreqency << endl;
	}
}

int main()
{
	PrintAllDigitFreqency(ReadPositiveNumber("Enter A positive integer"));
}
