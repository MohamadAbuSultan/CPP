
#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{

	int Number = 0;

	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;

}

void PrintResult(int Number)
{

	for (int i = Number; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i;
		}
		cout <<  endl;
	}

}

int main()
{

	int Number = ReadPositiveNumber("Enter Positive Number");
	PrintResult(Number);
}