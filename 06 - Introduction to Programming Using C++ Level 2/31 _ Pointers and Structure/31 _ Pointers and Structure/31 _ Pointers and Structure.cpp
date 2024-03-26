

#include <iostream>

using namespace std;

struct stEmployee
{
	string Name;
	float Salary;
};

int main()
{
	stEmployee Employee, * ptr;

	Employee.Name = "Mohamad Khaled";
	Employee.Salary = 5000;

	cout << "Employee Name : " << Employee.Name << endl;
	cout << "Employee Salary : " << Employee.Salary << endl;

	ptr = &Employee;
	cout << "\nUsing Pointer" << endl;
	cout << "Employee Name : " <<  ptr->Name << endl;
	cout << "Employee Salary : " << ptr->Salary << endl;

	return 0;
}

