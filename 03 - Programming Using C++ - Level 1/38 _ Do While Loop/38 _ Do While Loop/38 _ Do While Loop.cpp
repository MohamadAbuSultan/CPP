
#include <iostream>
using namespace std;

int ReadIntNumberInRange(int From, int To) {
	int Number;

	do
	{
		cout << "enter number between " << From << " and " << To << endl;
		cin >> Number;
	} while (Number < From || Number > To);

	return Number;
}

int main()
{
	cout << ReadIntNumberInRange(18, 45) << endl;
}