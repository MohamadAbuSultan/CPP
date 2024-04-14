

#include <iostream>
using namespace std;
int main()
{
	double Penny;
	double Nickel;
	double Dime;
	double Quarter; 
	double Dollar;
	cin >> Penny >> Nickel >> Dime >> Quarter >> Dollar;
	double TotalPennies = Penny * 1 + Nickel * 5 + Dime * 10 + Quarter * 25 + Dollar * 100;
	double TotalDollars = TotalPennies / 100;
	cout << TotalPennies << endl << TotalDollars << endl;
}

