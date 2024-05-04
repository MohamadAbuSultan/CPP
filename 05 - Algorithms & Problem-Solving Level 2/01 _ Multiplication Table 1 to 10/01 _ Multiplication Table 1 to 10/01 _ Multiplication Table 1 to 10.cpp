
#include <iostream>

using namespace std;

void PrintMultiplicationTableHeader() {
	cout << "\n\t\t\tMultiplication Table From 1 To 10\n\n";
	for (int i = 1; i <= 10; i++)
	{
		cout << "\t" << i;
	}
	cout << "\n\n------------------------------------------------------------------------------------\n";
}

string SeparateColumn(int i) {
	if (i < 10) return "   |";
	else return "  |";
}

void PrintMultiplicationTableBody() {
	PrintMultiplicationTableHeader();
	for (int i = 1; i <= 10; i++)
	{
		cout << " " << i << SeparateColumn(i)<< "\t";
		for (int j = 1; j <= 10; j++)
		{
			cout << i * j << "\t";
		}
		cout << endl;
	}
}

int main()
{
	PrintMultiplicationTableBody();
}

