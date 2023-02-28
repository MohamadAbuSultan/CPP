
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

float CalculateReminder(float TotalBill, float TotalCashPaid)
{

	return TotalCashPaid - TotalBill;

}

int main()
{

	float TotalBill = ReadPositiveNumber("Please Enter Total Bill : ");
	float TotalCashPaid = ReadPositiveNumber("Please Enter Total Cash Paid : ");

	cout << "\n";

	cout << "Total Bill = " << TotalBill << endl;

	cout << "Total Cash Paid = " << TotalCashPaid << endl;

	cout << "****************************\n";

	cout << "Remainder = " << CalculateReminder(TotalBill, TotalCashPaid) << endl;
}
