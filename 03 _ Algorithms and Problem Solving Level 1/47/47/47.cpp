
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

float TotalMonth(float LoanAmount, float MonthlyInstallment)
{

	return (float)LoanAmount / MonthlyInstallment;

}

int main()
{

	float LoanAmount = ReadPositiveNumber("Please Enter LoanAmount");
	float MonthlyInstallment = ReadPositiveNumber("Please Enter MonthlyInstallment");

	cout << "\nTotal Month To pay = " << TotalMonth(LoanAmount, MonthlyInstallment);
	cout << endl;


}
