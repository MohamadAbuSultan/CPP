

#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message)
{

	float Number = 0;

	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;

}

float MonthlyInstallment(float LoanAmount, float HowManyMonth)
{

	return (float)LoanAmount / HowManyMonth;

}

int main()
{
	float LoanAmount = ReadPositiveNumber("Enter LoanAmount ");
	float HowManyMonth = ReadPositiveNumber("Enter HowManyMonth ");

	cout << "\nMonthly Installment = " << MonthlyInstallment(LoanAmount, HowManyMonth);
	
	cout << endl;

	return 0;
}