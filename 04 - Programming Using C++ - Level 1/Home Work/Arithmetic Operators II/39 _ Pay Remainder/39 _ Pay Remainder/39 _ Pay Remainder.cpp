
#include <iostream>
using namespace std;
int main()
{
	double TotalBill, CashPaid;
	cin >> TotalBill >> CashPaid;
	double Reminder = CashPaid - TotalBill;
	cout << Reminder << endl;
}
