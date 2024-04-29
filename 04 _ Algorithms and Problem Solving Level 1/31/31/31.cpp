

#include <iostream>

using namespace std;

int ReadNumber()
{

	int Number;

	cout << "Enter Number : ";
	cin >> Number;

	return Number;

}

void PrintPowerOf2_3_4(int Number)
{

	cout << Number * Number << endl;
	cout << Number * Number * Number << endl;
	cout << Number * Number * Number * Number << endl;

}


int main()
{
	PrintPowerOf2_3_4(ReadNumber());
}
