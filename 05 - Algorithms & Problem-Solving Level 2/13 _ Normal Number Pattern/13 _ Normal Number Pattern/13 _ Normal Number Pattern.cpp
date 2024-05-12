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

void PrintNumberPattern(int Number) {
	for (int i = 1; i <= Number; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << i;
		}
		cout << endl;
	}
}

int main()
{
	PrintNumberPattern(ReadPositiveNumber("Enter A Positive Number: "));
}