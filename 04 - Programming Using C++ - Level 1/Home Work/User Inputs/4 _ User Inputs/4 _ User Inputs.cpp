
#include <iostream>
using namespace std;
int main()
{
	string Name;
	int Age;
	string City;
	string Country;
	float MonthlySalary;
	char Gender;
	bool isMarried;
	cout << "Enter Your Name" << endl;
	cin >> Name;
	cout << "Enter Your Age" << endl;
	cin >> Age;
	cout << "Enter Your City" << endl;
	cin >> City;
	cout << "Enter Your Country" << endl;
	cin >> Country;
	cout << "Enter Your MonthlySalary" << endl;
	cin >> MonthlySalary;
	cout << "Enter Your Gender" << endl;
	cin >> Gender;
	cout << "Enter " << endl;
	cin >> isMarried;

	cout << "************************" << endl;
	cout << "Name : " << Name << endl;
	cout << "Age : " << Age << endl;
	cout << "City : " << City << endl;
	cout << "Country : " << Country << endl;
	cout << "Monthly Salary : " << MonthlySalary << endl;
	cout << "Yearly Salary : " << MonthlySalary * 12 << endl;
	cout << "Gender : " << Gender << endl;
	cout << "Married : " << isMarried << endl;
	cout << "************************\n" << endl;

}
