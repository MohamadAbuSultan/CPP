

#include <iostream>
#include <string>
using namespace std;

void ReadNumber(int& Number1, int& Number2, int& Number3) {
	
	cout << "Enter number1 : " << endl;
	cin >> Number1;

	cout << "Enter number2 : " << endl;
	cin >> Number2;

	cout << "Enter number3 : " << endl;
	cin >> Number3;

}

int MaxOf3Number(int Number1, int Number2, int Number3) {
	if (Number1 > Number2)
		if (Number1 > Number3)
			return Number1;
		else
			return Number3;
	else
		if (Number2 > Number3)
			return Number2;
		else
			return Number3;
}

void PrintResult(int Max) {
	cout << Max << endl;
}

int main()
{
	int Number1, Number2, Number3;
	ReadNumber(Number1, Number2, Number3);
	PrintResult(MaxOf3Number(Number1, Number2, Number3));
}
