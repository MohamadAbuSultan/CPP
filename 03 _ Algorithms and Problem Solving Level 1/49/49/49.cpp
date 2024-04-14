
#include <iostream>
using namespace std;

string ReadPinCode()
{

	string PinCode;
	cout << "Enter PIN Code : ";
	cin >> PinCode;

	return PinCode;

}

bool Login()
{

	string PinCode;

	do
	{
		PinCode = ReadPinCode();

		if (PinCode == "1234")
			return 1;
		else {
			cout << "\nWrong PIN\n";
			system("color 4F");
		}

	} while (PinCode != "1234");

	return 0; 

}

int main()
{
	if (Login())
	{

		system("color 2F");
		cout << "\nYour Account balance is : " << 7500 << "\n";

	};

	return 0;
}
