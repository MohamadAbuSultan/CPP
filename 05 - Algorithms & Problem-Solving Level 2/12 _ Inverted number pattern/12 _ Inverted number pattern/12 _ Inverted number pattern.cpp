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

void PrintInvertedNumberPattern(int Number) {
	for (int i = Number; i > 0; i--)
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
	PrintInvertedNumberPattern(ReadPositiveNumber("Enter A Positive Number"));
}