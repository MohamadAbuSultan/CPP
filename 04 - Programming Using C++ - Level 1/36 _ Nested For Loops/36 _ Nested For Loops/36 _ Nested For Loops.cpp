
#include <iostream>
using namespace std;
int main()
{
	for (int i = 1; i <= 10; i++)
	{
		cout << "i=" << i << endl;

		for (int j = 1; j <= 10; j++)
		{
			cout << i << "*" << j << "=" << i * j << endl;
		}
		cout << "*******************\n";
	}

	cout << "\n";



	// الأسطر هي الفور لوب البرانية-الخارجية
	// الأعمدة هي الفور لوب الجوانية-الداخلية
	
	for (int i = 1; i <= 10; i++)
	{

		for (int j = 1; j <= 10; j++)
		{
			cout << "*";
		}

		cout << "\n";
	}

	cout << endl;
	for (int i = 1; i <= 10; i++)
	{

		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}

		cout << "\n";
	}

	cout << endl;
	for (int i = 1; i <= 10; i++)
	{

		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}

		cout << "\n";
	}
	for (int i = 10; i >= 1; i--)
	{

		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}

		cout << "\n";
	}
}
