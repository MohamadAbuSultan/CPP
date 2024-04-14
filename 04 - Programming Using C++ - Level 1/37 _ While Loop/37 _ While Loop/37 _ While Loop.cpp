
#include <iostream>
using namespace std;

int ReadIntNumberInRange(int From, int To) {
	int Number;
	cout << "enter number between" << From << " and " << To << endl;
	cin >> Number;

	while (Number < From || Number > To)
	{
		cout << "Wrong Number" << endl;
		cout << "Please enter a number between " << From << " and " << To << endl;
		cin >> Number;
	}

	return Number;
}

int main()
{
	
	// number from 1 to 5
	int i = 1;
	while (i<=5)
	{
		cout << i << endl;
		i++;
	}
	
	// positive number
	int Number;
	cin >> Number;
	while (Number<0)
	{
		cin >> Number;
	}
	cout << Number << endl;

	
	cout << "\nThe number is : " << ReadIntNumberInRange(18, 45) << endl;
}
