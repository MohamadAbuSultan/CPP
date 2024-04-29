
#include <iostream>
using namespace std;

int MySumFunction(int Num1, int Num2) {
	return Num1 + Num2;
}

int main()
{
	cout << MySumFunction(10, 20) << endl;
	cout << MySumFunction(5, 7) << endl;
	cout << MySumFunction(3, 4) << endl;
	cout << MySumFunction(150, 20) << endl;

	int Num1, Num2;
	cin >> Num1 >> Num2;
	cout << MySumFunction(Num1, Num2) << endl;

	return 0;
}
