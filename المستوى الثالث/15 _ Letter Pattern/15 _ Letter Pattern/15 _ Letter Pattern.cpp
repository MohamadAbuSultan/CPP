
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

void PrintLetterPattern(int Number)
{
	/* MY SOLUTION
	for (int i = 65; i <= 65 + Number-1; i++)
	{
		for (int j = 65; j <= i; j++)
		{
			cout << char(i);
		}
		
		cout << endl;

	}*/


	for (int i = 65; i <= 65 + Number - 1; i++)
	{
		for (int j = 1; j <= i - 65 + 1; j++)
		{
			cout << char(i);
		}
		cout << endl;
	}
}


int main()
{
	PrintLetterPattern(ReadPositiveNumber("Enter A Positive Number : "));
}

