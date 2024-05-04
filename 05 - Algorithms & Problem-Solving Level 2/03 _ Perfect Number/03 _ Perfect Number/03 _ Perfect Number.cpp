
#include <iostream>

using namespace std;

// perfect number = Sum (all divisors)

int ReadPositiveNumber(string message) {
	int number;
	do
	{
		cout << message << endl;
		cin >> number;
	} while (number <= 0);
	return number;
}

bool IsPerfectNumber(int Number) {
	int Sum = 0;
	for (int  i = 1; i < Number; i++)
	{
		if (Number % i == 0) Sum += i;
	}
	return Number == Sum;
}

void PrintResult(int Number) {
	if (IsPerfectNumber(Number)) cout << Number << " is a perfect number";
	else cout << Number << " is not a perfect number";
}

int main()
{
	PrintResult(ReadPositiveNumber("Enter a positive number"));
}
