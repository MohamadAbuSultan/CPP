
#include <iostream>
using namespace std;
struct  stAddress
{
	string Address;
	string POBOX;
};
struct stIDCard
{
	string Name;
	int Age;
	string City;
	string Country;
	int MonthlySalary;
	char Gender;
	bool Married;

	stAddress Address;
};
int main()
{
	stIDCard IDCard;
	
	IDCard.Name = "Mohammed Abu Sultan";
	IDCard.Age = 20;
	IDCard.City = "Gaza";
	IDCard.Country = "PS";
	IDCard.MonthlySalary = 2000;
	IDCard.Gender = 'm';
	IDCard.Married = true;
	
	IDCard.Address.Address = "Gaza-Tal_Alhawa";

	cout << "**************************************************************" << endl;
	cout << IDCard.Name << " " << IDCard.Age << " " << IDCard.Address.Address << " " <<
		IDCard.City << " " << IDCard.Country << " " << IDCard.MonthlySalary <<
		" " << IDCard.MonthlySalary*12 << " " << IDCard.Gender << " " << 
		IDCard.Married << endl;
	cout << "**************************************************************" << endl;
	
	return 0;
}