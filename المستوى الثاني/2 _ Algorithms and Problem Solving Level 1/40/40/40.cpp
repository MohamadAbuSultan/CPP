
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

float TotalBillAfterServiceAndTax(float TotalBill)
{

	TotalBill *= 1.1;
	TotalBill *= 1.16;

	return TotalBill;

}

int main()
{

	float TotalBill = ReadPositiveNumber("Enter TotalBill");

	cout << "TotalBill = " << TotalBill << endl;

	cout << "TotalBillAfterServiceAndTax = " << TotalBillAfterServiceAndTax(TotalBill);

}