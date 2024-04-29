

#include <iostream>
using namespace std;

// array (default التلقائي تبعها) by reference 
// بتنبعت by reference 
// بدون ما تخبرها
// array ما بتنبعت إلا by reference 

void ReadArrayData(int x[3]) {
	cout << "enter number1 : " << endl;
	cin >> x[0];

	cout << "enter number2 : " << endl;
	cin >> x[1];

	cout << "enter number3 : " << endl;
	cin >> x[2];
}

void PrintArrayData(int x[3]) {
	cout << x[0] << endl;
	cout << x[1] << endl;
	cout << x[2] << endl;
}

int main()
{
	int x[3];

	ReadArrayData(x);
	PrintArrayData(x);

	return 0; 
}
