
#include <iostream>
#include <string>
using namespace std;
int main()
{
	// convert double to integer 
	int Num1;
	double Num2 = 18.99;

	Num1 = Num2; // implicit conversion تحويل ضمني  

	Num1 = (int)Num2; // explicit conversion تحويل صريح  
	
	Num1 = int(Num2); // explicit conversion تحويل صريح

	cout << Num1 << endl;


	// convert string to (int, float, double)
	string str = "123.456";

	// convert string to integer
	int num_int = stoi(str); // truncation the fraction(123.456) and store 123 as integer

	// convert string to float 
	float num_float = stof(str);

	// convert string to double
	double num_double = stod(str);

	cout << num_int << " " << num_float << " " << num_double << endl;


	// convert Numbers to string
	int num1 = 123;
	double num2 = 18.99;

	string Str1, Str2;
	Str1 = to_string(num1);
	Str2 = to_string(num2);
	cout << Str1 << " " << Str2 << endl;

	return 0;
}
