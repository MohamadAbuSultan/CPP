
#include <iostream>
using namespace std;

void MySumProcedures()
{
	int a, b;
	cout << "Enter number1 : " << endl;
	cin >> a;
	cout << "Enter number2 : " << endl;
	cin >> b;
	cout << "********************" << endl;
	cout << a + b << endl << endl;
}

int MySumFunction() 
{
	int a, b;
	cout << "Enter number1 : " << endl;
	cin >> a;
	cout << "Enter number2 : " << endl;
	cin >> b;
	cout << "********************" << endl;
	return a + b;
}
int main()
{
	MySumProcedures();
	cout << MySumFunction() << endl;
}
