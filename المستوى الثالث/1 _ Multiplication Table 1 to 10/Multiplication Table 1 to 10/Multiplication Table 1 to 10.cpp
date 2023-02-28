#include <iostream>
using namespace std;

void PrintTableHeader()
{

	cout << "\n\n\t\t\tMultiplication Table From 1 to 10\n\n";
	cout << "\t";

	for (int i = 1; i <= 10; i++)
	{
		cout << i << "\t";
	}

	cout << "\n_____________________________________________________________________________\n";

}

string ColumnSperator(int i)
{

	if (i < 10)
	{
		return "   |";
	}
	else
	{
		return "  |";
	}

}

void PrintMultiplicationTable()
{

	PrintTableHeader();

	for (int i = 1; i <= 10; i++)
	{
		cout << " " << i << ColumnSperator(i) << "\t";

		for (int j = 1; j <= 10; j++)
		{
			cout << i * j << "\t";
		}

		cout << endl;

	}

}

void main()
{

	PrintMultiplicationTable();

}

// My Solution
//#include <iostream>
//using namespace std;
//
//void Print()
//{
//	
//
//	cout << "\t\t";
//
//	for (int i = 1; i <= 10; i++)
//	{
//		cout << i << "\t";
//	}
//
//	cout << "\n";
//
//	for (int i = 1; i <= 10; i++)
//	{
//		cout << " " << i << "\t" << "|" << "\t";
//
//		for (int j = 1; j <= 10; j++)
//		{
//			cout << i * j << "\t";
//		}
//		cout << endl;
//	}
//	
//
//}
//
//
//int main()
//{
//
//	cout << "\n\t\t\t\tMultiplication from 1 to 10" << endl;
//	cout << "\n____________________________________________________________________________________________\n";
//
//	Print();
//
//}
