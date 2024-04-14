
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int Number;
	string FullName, City, Country;
	
	cout << "Number " << endl;
	cin >> Number;

	cout << "Name : " << endl;
	cin.ignore(1, '\n'); // enter طنشلي كبسة ال 
	getline(cin, FullName);

	cout << "City : " << endl;
	cin >> City;

	cout << Number << " " << FullName << " " << City << endl;
}
