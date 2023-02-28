
#include <iostream>

using namespace std;

int main()
{

	int a = 10;
	cout << "a value = " << a << endl;
	cout << "a adress =\t" << &a << endl;

	int* p;
	p = &a;

	cout << "Pointer value = " << p << endl;
	cout << "Value of the address that p is pointing to is " << *p << endl;

	*p = 20;

	cout << a << endl;
	cout << *p << endl;

	return 0;

}
