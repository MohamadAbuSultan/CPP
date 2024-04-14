

#include <iostream>
using namespace std;
int main()
{
	/*
	* Home Work 1
	Are the following valid variable names and why?
		Age                True
		My - Age		   (الفاصلة والفراغ)
		My_Age			   True
		Age				   True
		2x				   (بنفعش نبدأ برقم)
		X2				   True
		My Name			   (في فراغ)
		MyName			   True	
		#Name			   special characters
		$Name			   special characters
		N@me               special characters
		int				   reserved keywords 
		float		       reserved keywords 
	*/
	
	//Home Work 2
	string Name = "Mohamad Abu Sultan";
	int Age = 20;
	string City = "Gaza";
	string Country = "PS";
	float MonthlySalary = 2000;
	char Gender = 'M';
	bool isMarried = true;
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

	//Home Work 3
	int a = 20, b = 30, c = 10;
	cout << a << " +" << endl;
	cout << b << " +" << endl;
	cout << c << endl;
	cout << "------------" << endl;
	cout << a + b + c << endl << endl;
	
	//Home Work 4
	int age = 5;
	cout << "After " << age << " years you will be " << age + 25 << " years old." << endl;
}
