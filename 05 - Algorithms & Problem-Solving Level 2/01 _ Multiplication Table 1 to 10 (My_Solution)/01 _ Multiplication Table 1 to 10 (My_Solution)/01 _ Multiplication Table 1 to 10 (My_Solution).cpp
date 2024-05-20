#include <iostream>

using namespace std;

void PrintMultiplicationTableHeader() {
	cout << "\n\t\t\tMultiplication Table from 1 to 10\n" << endl;
	cout << "\t";
	for (int i = 1; i <= 10; i++)
	{
		cout << "\t" << i;
	}

	cout << "\n______________________________________________________________________________________" << endl;
}

void PrintMultiplicationTableBody() {
	for (int i = 1; i <= 10; i++)
	{
		cout << i << "\t" << "|\t";
		for (int j = 1; j <= 10; j++)
		{
			cout << i * j << "\t";
		}
		cout << endl;
	}
}

int main()
{
	PrintMultiplicationTableHeader();
	PrintMultiplicationTableBody();
}

