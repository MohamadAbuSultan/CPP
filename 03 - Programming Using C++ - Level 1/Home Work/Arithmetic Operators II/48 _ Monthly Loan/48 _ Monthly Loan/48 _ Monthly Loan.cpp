
#include <iostream>
using namespace std;
int main()
{
	int LoanAmount, HowManyMonth;
	cin >> LoanAmount >> HowManyMonth;
	int MonthlyInstallment = LoanAmount / HowManyMonth;
	cout << MonthlyInstallment << endl;
}
