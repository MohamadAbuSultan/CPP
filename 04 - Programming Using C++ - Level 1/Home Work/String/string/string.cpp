
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string FullName, String2, String3;

	cout << "Enter Your Full Name : " << endl;
	getline(cin, FullName);
	
	cout << "Enter Number : " << endl;
	cin >> String2;

	cout << "Enter Number2 : " << endl;
	cin >> String3;

	cout << "***************" << endl;

	cout << "length of your full name is : " << FullName.length() << endl;

	cout << "Characters at 0,2,4,7 are : " << FullName[0] << " " << FullName[2] << " " << FullName[4] << " " << FullName[7] << endl;
	
	string s1 = String2 + String3;
	cout << "Concatenation of string2 and string 3 are = " << String2 + String3 << endl;

	int num1 = stoi(String2);
	int num2 = stoi(String3);
	cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;



}
