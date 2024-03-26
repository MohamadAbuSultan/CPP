
#include <iostream>
using namespace std;

int i = 0; // Global Variable

int ReadNumber() {
	int Number;
	cout << "Enter N : ";
	cin >> Number;
	return Number;
}

void PrintRangeFrom1ToN_UsingFor(int Number) {
	cout << "\nFor Loop" << endl;
	for (::i = 0; i <= Number; i++)
	{
		cout << "Number" << i << " = " << i << endl;
	}
	cout << "\n";
}

void PrintRangeFrom1ToN_UsingWhile(int Number) {
	cout << "While Loop" << endl;
	::i = 0;
	while (::i<=Number)
	{
		cout << "Number" << i << " = "  << i << endl;
		i++;
	}
	cout << "\n";
}

void PrintRangeFrom1ToN_UsingDoWhile(int Number) {
	cout << "Do While Loop" << endl;
	::i = 0;
	do
	{
		cout << "Number" << i << " = " << i << endl;
		i++;
	} while (::i <= Number);
}



int main()
{
	int N = ReadNumber();

	PrintRangeFrom1ToN_UsingFor(N);
	PrintRangeFrom1ToN_UsingWhile(N);
	PrintRangeFrom1ToN_UsingDoWhile(N);
}

