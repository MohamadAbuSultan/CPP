
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

bool IsPerfectNumber(int Number) {
	int Sum = 0;
	for (int i = 1; i < Number; i++)
	{
		if (Number % i == 0) Sum += i;
	}
	return Number == Sum;
}

void PrintPerfectNumberFrom1ToN(int Number){
	for (int i = 1; i < Number; i++)
	{
		if (IsPerfectNumber(i)) cout << i << endl;
	}
}
int main()
{
	PrintPerfectNumberFrom1ToN(ReadPositiveNumber("Enter A positive Number"));
}
