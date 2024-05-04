
#include <iostream>

using namespace std;

enum enPrimeNotPrime {Prime = 1 , NotPrime = 2};

int ReadPositiveNumber(string Message) {
	int Number;
	do 
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);
	return Number;
}

enPrimeNotPrime IsPrime(int Number) {
	if (Number <= 1) return enPrimeNotPrime::NotPrime;
	for (int i = 2; i <= sqrt(Number); i++)
	{
		if (Number % i == 0) return enPrimeNotPrime::NotPrime;
	}
	return enPrimeNotPrime::Prime;
}

void PrintPrimeNumbers(int Number)
{
	for (int i = 2; i <= Number; i++)
	{
		if (IsPrime(i) == enPrimeNotPrime::Prime) cout << i << endl;
	}
}

int main()
{
	PrintPrimeNumbers(ReadPositiveNumber("Enter A Positive Number"));
}