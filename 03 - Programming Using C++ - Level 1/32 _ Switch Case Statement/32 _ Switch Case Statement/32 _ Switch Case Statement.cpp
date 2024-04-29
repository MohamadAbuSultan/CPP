
#include <iostream>
using namespace std;

enum enScreenColor { Red = 1, Blue = 2, Green = 3, Yellow = 4 };

enum enCountryChoice { Palestine = 1, Algeria = 2, Egypt = 3, Iraq = 4, other = 5 };

int main()
{
	int day;
	cin >> day;
	switch (day)
	{

	case 1:
		cout << "Sunday\n";
		break;

	case 2:
		cout << "Mon\n";
		break; 		
	case 3:			
		cout << "Thu\n";
		break;		
					
	case 4:			
		cout << "Wed\n";
		break;		
					
	case 5:			
		cout << "Thu\n";
		break;		
					
	case 6:			
		cout << "Fri\n";
		break;

	case 7:
		cout << "Sat\n";
		break;

	default:
		cout << "Not a day\n";
		break;
	}

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

	switch (Color)
	{
	case enScreenColor::Red:
		system("color 4f");
		break;
	case enScreenColor::Blue:
		system("color 1F");
		break;
	case enScreenColor::Green:
		system("color 2F");
		break;
	case enScreenColor::Yellow:
		system("color 6F");
		break;
	default:
		system("color 4f");
		break;
	}


	cout << "**********************\n";
	cout << "Please enter the number of your country :\n";
	cout << "(1) Palestine\n";
	cout << "(2) Algeria\n";
	cout << "(3) Egypt\n";
	cout << "(4) Iraq\n";

	int c1;
	enCountryChoice Country;

	cin >> c1;
	Country = (enCountryChoice)c1;

	switch (Country)
	{
	case enCountryChoice::Palestine:
		cout << "PS\n";
		break;
	case enCountryChoice::Algeria:	
		cout << "ALg\n";
		break;
	case enCountryChoice::Egypt:
		cout << "Egy\n";
		break;
	case enCountryChoice::Iraq:
		cout << "IQ\n";
		break;
	default:
		cout << "Other\n";
		break;
	}

}