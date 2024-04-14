
#include <iostream>
#include <string>
using namespace std;

enum enEvenOrOdd { Even = 2, Odd = 1 };

int ReadNumber() 
{

	int Number;

	cout << "Enter A Number : ";
	cin >> Number;

	return Number;

}

enEvenOrOdd CheckEvenOrOdd(int Number) 
{

	if (Number % 2 == 0)
		return enEvenOrOdd::Even;
	else
		return enEvenOrOdd::Odd;

}

int SumEvenNumbersFrom1ToN(int N)
{

	int Sum = 0;

	for (int Counter = 1; Counter <= N; Counter++)
	{
		if (CheckEvenOrOdd(Counter) == enEvenOrOdd::Even)
		{
			Sum += Counter;
		}
	}

	return Sum;
}

void PrintResult(int Result) 
{

	cout << Result;

}

int main()
{
	int N = ReadNumber();

	cout << SumEvenNumbersFrom1ToN(N);

	cout << "\n\n*******************\n\n";

	PrintResult(SumEvenNumbersFrom1ToN(N));
}
