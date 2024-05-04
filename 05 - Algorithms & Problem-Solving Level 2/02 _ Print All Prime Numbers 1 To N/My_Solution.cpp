
#include <iostream>

using namespace std;

void ReadPositiveNumber(int& Number) {
	do
	{
		cout << "Enter a positive number: ";
		cin >> Number;
	} while (Number < 0);
}

bool IsPrime(int Number) {
	if (Number <= 1) return false;
	for (int i = 2; i <= sqrt(Number); i++)
	{
		if (Number % i == 0) return false;
	}
	return true;
}

void PrintPrimeNumbers(int Number)
{
	for (int i = 2; i <= Number; i++)
	{
		if (IsPrime(i)) cout << i << endl;
	}
}

int main()
{
	int Number = 0;
	ReadPositiveNumber(Number);
	PrintPrimeNumbers(Number);
}