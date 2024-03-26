

#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{

	int Number;

	do
	{
		
		cout << Message << endl;

		cin >> Number;

	} while (Number < 0);


	return Number;

}

int FactorialOfNumber(int Number) 
{

	int Factorial = 1;

	for (int Counter = Number; Counter >= 1; Counter--)

	{

		Factorial *= Counter;

	}

	return Factorial;

}


	/*

	for (int Counter = 1; Counter <= Number; Counter++)
	{

		Factorial *= Counter;

	}

	*/


int main()
{
	
	
	cout << FactorialOfNumber(ReadPositiveNumber("Please Enter a Positive Number"));


}

