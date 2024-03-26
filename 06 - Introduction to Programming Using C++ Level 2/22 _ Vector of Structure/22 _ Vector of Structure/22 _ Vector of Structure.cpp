
#include <vector>
#include <iostream>

using namespace std;

struct stEmployee
{
	string FirstName;
	string LastName;
	int Salary = 0;
};


void ReadInfo(vector <stEmployee> & vEmployee)
{
	char ReadMore = 'Y';
	stEmployee tempEmployee;

	while (ReadMore == 'Y' || ReadMore == 'y')
	{

		cout << "Enter the FirstName of the Employee  ?" << endl;
		cin >> tempEmployee.FirstName;
		cout << "Enter the LastName of the Employee  ?" << endl;
		cin >> tempEmployee.LastName;
		cout << "Enter the Salary of the Employee  ?" << endl;
		cin >> tempEmployee.Salary;
		vEmployee.push_back(tempEmployee);

		cout << "\nDo you want to read more number ? y/n ? ";
		cin >> ReadMore;

	}

}

void PrintInfo(vector <stEmployee> & vEmployee)
{
	// ranged loop
	for (stEmployee &Employee : vEmployee)
	{
		cout << "\nFirst Name : " << Employee.FirstName << endl;
		cout << "Last Name : " << Employee.LastName << endl;
		cout << "Salary : " << Employee.Salary << endl;
	}
}

int main()
{
	vector <stEmployee> vEmployee;


	ReadInfo(vEmployee);
	PrintInfo(vEmployee);

	//stEmployee tempEmployee;
	//tempEmployee.FirstName = "Mohamad";
	//tempEmployee.LastName = "Khaled";
	//tempEmployee.Salary = 5000;
	//vEmployee.push_back(tempEmployee);

	//tempEmployee.FirstName = "Fairouz";
	//tempEmployee.LastName = "Mohamad";
	//tempEmployee.Salary = 1000;
	//vEmployee.push_back(tempEmployee);

	//tempEmployee.FirstName = "Mohamad";
	//tempEmployee.LastName = "Alaa";
	//tempEmployee.Salary = 5000;
	//vEmployee.push_back(tempEmployee);

	//// ranged loop
	//for (stEmployee &Employee : vEmployee)
	//{
	//	cout << "\nFirst Name : " << Employee.FirstName << endl;
	//	cout << "Last Name : " << Employee.LastName << endl;
	//	cout << "Salary : " << Employee.Salary << endl;
	//}

	return 0;
}
