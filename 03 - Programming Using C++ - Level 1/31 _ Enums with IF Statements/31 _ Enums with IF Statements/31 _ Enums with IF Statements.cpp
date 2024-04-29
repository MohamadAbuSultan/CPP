

#include <iostream>
using namespace std;

enum enScreenColor { Red = 1, Blue = 2, Green = 3, Yellow = 4 };

enum enCountryChoice { Palestine = 1, Algeria = 2, Egypt = 3, Iraq = 4, other = 5 };

int main()
{
	cout << "**********************\n";
	cout << "Please enter the number of your Color :\n";
	cout << "(1) Red\n";
	cout << "(2) Blue\n";
	cout << "(3) Green\n";
	cout << "(4) Yellow\n";
	cout << "(5) Other\n";
	cout << "**********************\n";
	cout << "Your Choise? ";

	int c;
	enScreenColor Color;

	cin >> c;
	Color = (enScreenColor)c;

	if (Color == enScreenColor::Red) {
		system("color 4f");
	}
	else if (Color == enScreenColor::Blue) {
		system("color 1F");
	}
	else if (Color == enScreenColor::Green) {
		system("color 2F");
	}
	else if (Color == enScreenColor::Yellow) {
		system("color 6F");
	}
	else {
		system("color 4f");
	}

	cout << "**********************\n";
	cout << "Please enter the number of your country :\n";
	cout << "(1) Palestine\n";
	cout << "(2) Algeria\n";
	cout << "(3) Egypt\n";
	cout << "(4) Iraq\n";
	cout << "(5) Other\n";

	int c1;
	enCountryChoice Country;

	cin >> c1;
	Country = (enCountryChoice)c1;

	if (Country == enCountryChoice::Palestine) {
		cout << "Your country is palestine\n";
	}
	else if (Country == enCountryChoice::Algeria) {
		cout << "Your country is Algeria\n";
	}
	else if (Country == enCountryChoice::Egypt) {
		cout << "Your country is Egypt\n";
	}
	else if (Country == enCountryChoice::Iraq) {
		cout << "Your country is Iraq\n";
	}
	else {
		cout << "non of them\n";
	}
}
