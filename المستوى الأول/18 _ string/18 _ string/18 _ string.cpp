
#include <iostream>
#include <string>
using namespace std;
int main()
{
	// strings are collection of Characters
	// strings are Array of Characters

	string MyString = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cout << MyString.length() << endl;

	cout << MyString[2] << endl;

	string S1 = "10", S2 = "20";

	string S3 = S1 + S2; // Concatenation
	cout << S3 << endl; //will print 1020

	int Sum = stoi(S1) + stoi(S2);
	cout << Sum << endl; //will print 30

	string S4 = "AB", S5 = "CD";
	string S6 = S4 + S5;
	cout << S6 << endl;

	cout << "Enter Your FullName : " << endl;
	// Read String With Spaces
	string FullName;
	// getline = إقرأ كل السطر
	getline(cin, FullName);
	
	cout << FullName << endl;

	return 0;

}
