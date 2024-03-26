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


//// My Solution 1
////		#include <iostream>
////		using namespace std;
////		
////		void Print()
////		{
////			
////		
////			cout << "\t\t";
////		
////			for (int i = 1; i <= 10; i++)
////			{
////				cout << i << "\t";
////			}
////		
////			cout << "\n";
////		
////			for (int i = 1; i <= 10; i++)
////			{
////				cout << " " << i << "\t" << "|" << "\t";
////		
////				for (int j = 1; j <= 10; j++)
////				{
////					cout << i * j << "\t";
////				}
////				cout << endl;
////			}
////			
////		
////		}
////		
////		
////		int main()
////		{
////		
////			cout << "\n\t\t\t\tMultiplication from 1 to 10" << endl;
////			cout << "\n____________________________________________________________________________________________\n";
////		
////			Print();
////		
////		}



// my solution 2
//#include <iostream>
//using namespace std;
//
//void Print() {
//	for (int i = 1; i < 11; i++)
//	{
//		cout << "\t" << i;
//	}
//}
//
//void Multiplication() {
//	for (int i = 1; i < 11; i++)
//	{
//		if (i == 10)
//			cout << i << "  |  ";
//		else
//			cout << i << "   |  ";
//		for (int j = 1; j < 11; j++)
//		{
//			cout << i * j << "\t";
//		}
//		cout << endl;
//	}
//}
//
//void main() {
//	cout << "\t\tMultiplication Table from 1 to 10\n\n";
//	Print();
//	cout << "\n________________________________________________________________________________________\n";
//	Multiplication();
//}