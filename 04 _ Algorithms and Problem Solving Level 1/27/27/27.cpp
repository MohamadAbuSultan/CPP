

#include <iostream>
using namespace std;

int ReadNumber() {
	int Number;
	cout << "Enter Number : ";
	cin >> Number;
	return Number;
}

void PrintRangeFromNTo1_UsingWhile(int Number) {
	int Counter = Number + 1;

	cout << "\nWhile\n";

	while (Counter>1)
	{
		Counter--;
		cout << "Number " << Counter << " = " << Counter << endl;
	}
}
void PrintRangeFromNTo1_UsingDoWhile(int Number) {
	int Counter = Number + 1;

	cout << "\nDo..While\n";
	do
	{
		Counter--;
		cout << "Number " << Counter << " = " << Counter << endl;
	} while (Counter > 1);	
}
void PrintRangeFromNTo1_UsingFor(int Number) {
	cout << "\nFor Loop" << endl;
	for (int Counter = Number; Counter >= 1; Counter--)
	{
		cout << "Number " << Counter << " = " << Counter << endl;
	}
	
}

int main()
{
	int N = ReadNumber();

	PrintRangeFromNTo1_UsingFor(N);
	PrintRangeFromNTo1_UsingWhile(N);
	PrintRangeFromNTo1_UsingDoWhile(N);
}