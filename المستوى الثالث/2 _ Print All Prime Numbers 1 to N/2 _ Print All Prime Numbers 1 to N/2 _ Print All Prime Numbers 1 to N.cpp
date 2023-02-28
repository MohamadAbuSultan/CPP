
#include <iostream>
using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

float ReadPositiveNumber(string Message)
{

	float Number = 0;

	do
	{
		cout << Message << endl;

		cin >> Number;

	} while (Number <= 0);

	return Number;

}

enPrimeNotPrime CheckPrime(int Number)
{

	float M = round(Number / 2);

	for (int Counter = 2; Counter <= M; Counter++)
	{

		if (Number % Counter == 0)
		{
			return enPrimeNotPrime::NotPrime;
		}

	}

	return enPrimeNotPrime::Prime;

}

void PrintNumberType(float Number)
{

	for (int Counter = 1; Counter <= Number; Counter++)
	{

		if (CheckPrime(Counter) == enPrimeNotPrime::Prime)
			cout << Counter << endl;

	}
	
}

int main()
{

	PrintNumberType(ReadPositiveNumber("Please Enter Positive Number : "));

}
