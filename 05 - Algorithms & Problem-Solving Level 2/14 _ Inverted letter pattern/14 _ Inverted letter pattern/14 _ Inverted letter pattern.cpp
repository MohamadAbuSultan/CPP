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

void InvertedLetterPattern(int Number) {
	for (int i = Number + 65 - 1; i >= 65; i--)
	{
		for (int j = (i - 65) + 1; j > 0; j--)
		{
			cout << char(i);
		}
		cout << endl;
	}
}

int main()
{
	InvertedLetterPattern(ReadPositiveNumber("Enter A Positive Number"));
}
