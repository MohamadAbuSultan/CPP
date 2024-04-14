
#include <iostream>
using namespace std;
int main()
{
	int A = 10;
	int B = A++;

	cout << A << endl << B << endl;

	B = ++A;
	cout << A << endl << B << endl;
}
