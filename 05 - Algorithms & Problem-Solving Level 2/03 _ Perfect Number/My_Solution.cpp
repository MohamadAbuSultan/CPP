
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

int IsDivideBy(int Number) {
	int sum = 0;
	for (int i = 1; i < Number; i++)
	{
		if (Number % i == 0) sum += i;
	}
	return sum;
}

void PrintIsPerfect(int Number) {
	if (IsDivideBy(Number) == Number) cout << Number << " is perfect";
	else cout << Number << " is not perfect";
}

int main()
{
	PrintIsPerfect(ReadPositiveNumber("Enter Positive Number"));
}
