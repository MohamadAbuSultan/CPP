
#include <iostream>
using namespace std;
int main()
{
	bool A = 1, B = 0;
	cout << (A && B) << endl;
	cout << (A || B) << endl;
	cout << !A << endl;
	cout << !B << endl;
	cout << !(A && B) << endl;
	cout << !(A || B) << endl;

	bool Result;
	// NOT(5>6 OR 7=7) AND NOT(1 Or False)
	Result = !(5 > 6 || 7 == 7) && !(1 || 0);
	cout << Result << endl;
}
