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

bool isPerfectNumber(int Number)
{

	int Sum = 0;

	for (int i = 1; i < Number; i++)
	{
		if (Number % i == 0)
			Sum += i;
	}

	return Number == Sum;

}

void PrintResult(int Number)
{

	if (isPerfectNumber(Number))
		cout << Number << " is Perfect Number";
	else
		cout << Number << " is not Perfect Number";

}

void main()
{

	PrintResult(ReadPositiveNumber("Enter Positive Number : "));

}

// MY SOLUTION
//
//#include <iostream>
//
//using namespace std;
//
//
//int ReadPositiveNumber(string Message)
//{
//
//	int Number = 0;
//
//	do
//	{
//		cout << Message << endl;
//		cin >> Number;
//	} while (Number <= 0);
//
//	return Number;
//
//}
//
//int PrintResults(int Number)
//{
//
//	int Sum = 0;
//
//	for (int i = 1; i < Number; i++)
//	{
//		if (Number % i == 0)
//		{
//			Sum += i;
//		}
//	}
//
//	return Sum;
//
//}
//
//void PrintResult(int Number)
//{
//
//	if (PrintResults(Number) == Number)
//		cout << "Number is Perfect";
//
//}
//
//int main()
//{
//
//	int Number = ReadPositiveNumber("H");
//
//	PrintResult(Number);
//	
//}