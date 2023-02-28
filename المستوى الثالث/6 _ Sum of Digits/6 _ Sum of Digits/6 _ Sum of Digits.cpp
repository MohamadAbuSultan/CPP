
#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{

    int Number = 0;

	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;

}

int PrintResults(int Number)
{

	int Remainder = 0;

	int Sum = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Sum = Sum + Remainder;
	}

	return Sum;

}

int main()
{
	cout << "\nSum Of Digits : "
		<< PrintResults(ReadPositiveNumber("Enter Positive Number : ? "))
		<< "\n";
}