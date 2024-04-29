
#include <iostream>
#include <string>
using namespace std;

struct strPersonalInformation
{
	string FullName;
	int MyAge;
	string MyCity;
	string MyCountry;
	int MyMonthlySalary;
	char MyGender;
	bool isMarried;
};

void ReadPersonalInformation(strPersonalInformation &Person) {
	cout << "Enter your FullName : " << endl;
	getline(cin, Person.FullName);

	cout << "Enter Your Age : " << endl;
	cin >> Person.MyAge;

	cout << "Enter your city : " << endl;
	cin >> Person.MyCity;

	cout << "Enter your country : " << endl;
	cin >> Person.MyCountry;

	cout << "Enter your MonthlySalary : " << endl;
	cin >> Person.MyMonthlySalary;

	cout << "Enter your gender : " << endl;
	cin >> Person.MyGender;

	cout << "Is Married ? true or false : " << endl;
	cin >> Person.isMarried;
}

void PrintPersonalInformation(strPersonalInformation Person) {
	cout << "\n********************************\n";
	cout << "Full Name : " << Person.FullName << endl;
	cout << "Age : " << Person.MyAge << endl;
	cout << "City : " << Person.MyCity << endl;
	cout << "Country : " << Person.MyCountry << endl;
	cout << "Monthly Salary : " << Person.MyMonthlySalary << endl;
	cout << "Yearly Salary : " << Person.MyMonthlySalary * 12 << endl;
	cout << "Gender : " << Person.MyGender << endl;
	cout << "Married : " << Person.isMarried << endl;
	cout << "********************************\n";
} 

int main()
{
	strPersonalInformation MyPerson1;
	ReadPersonalInformation(MyPerson1);
	PrintPersonalInformation(MyPerson1);
}
