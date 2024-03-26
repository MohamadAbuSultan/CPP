

#include <iostream>
using namespace std;

void ReadNumbers(int& Number1, int& Number2) {
	cout << "Enter Number1" << endl;
	cin >> Number1;

	cout << "Enter Number2" << endl;
	cin >> Number2;
}

void Swap2Numbers(int& A, int& B) {
	int temp;

	temp = A;
	
	A = B;

	B = temp;

}

void PrintNumbers(int Number1, int Number2) {
	cout << "Number1 : " << Number1 << "\t";
	cout << "Number2 : " << Number2 << "\t";
}

int main()
{
	int Number1, Number2;
	ReadNumbers(Number1, Number2);
	cout << endl;
	PrintNumbers(Number1, Number2);
	cout << endl << endl;
	Swap2Numbers(Number1, Number2);
	PrintNumbers(Number1, Number2);
	cout << endl << endl;
}
