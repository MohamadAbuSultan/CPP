
#include <iostream>
using namespace std;

int main()
{
	int LoanAmount, MontlyPayment;
	cin >> LoanAmount >> MontlyPayment;
	int TotalMonths = LoanAmount / MontlyPayment;
	cout << TotalMonths << endl;
}
