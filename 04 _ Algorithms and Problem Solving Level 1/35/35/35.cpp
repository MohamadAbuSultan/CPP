

#include <iostream>
using namespace std;

// Divide & Conquer فرق تَسُد 

struct stPiggyBankContent
{
	float Pennies, Nickels, Dimes, Quarters, Dollars;
};

stPiggyBankContent ReadPiggyBankContent()
{

	stPiggyBankContent PiggyBankContent;

	cout << "Enter Total Pennies ";
	cin >> PiggyBankContent.Pennies;

	cout << "Enter Total Nickels ";
	cin >> PiggyBankContent.Nickels;

	cout << "Enter Total Dimes ";
	cin >> PiggyBankContent.Dimes;

	cout << "Enter Total Quarters ";
	cin >> PiggyBankContent.Quarters;

	cout << "Enter Total Dollars ";
	cin >> PiggyBankContent.Dollars;

	return PiggyBankContent;
}

float CalculateTotalPennies(stPiggyBankContent PiggyBankContent)
{

	float TotalPennies = 0;

	TotalPennies = PiggyBankContent.Pennies * 1 + PiggyBankContent.Nickels * 5 +
		PiggyBankContent.Dimes * 10 + PiggyBankContent.Quarters * 25 +
		PiggyBankContent.Dollars * 100;

	return TotalPennies;
}

int main()
{

	float TotalPennies = CalculateTotalPennies(ReadPiggyBankContent());

	cout << "\nTotal Pennies = " << TotalPennies << endl;
	
	cout << "\nTotal Dollars = " << TotalPennies / 100;


}
