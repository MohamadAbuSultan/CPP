
#include <iostream>
using namespace std;

string ReadPinCode()
{

	string PinCode;
	cout << "\nEnter PIN Code : ";
	cin >> PinCode;

	return PinCode;

}

bool Login()
{


	string PinCode;
	int Counter = 3;
	do
	{
		Counter--;
		PinCode = ReadPinCode();

		if (PinCode == "1234")
			return 1; // when you reach here this means login success.
		else {
			system("color 4F");
			cout << "\nWrong PIN, you Have " << Counter << " more try";
		}
	} while (Counter >= 1 && PinCode != "1234");

	return 0; // when you reach here this means login faild.

}

int main()
{
	if (Login())
	{
		system("color 2F");

		cout << "\nYour Acount Balance is : " << 7500 << endl;
	}
	else
		cout << "\nYour card blocked call the bank for help\n";

	return 0;
}