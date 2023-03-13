
#include <iostream>

using namespace std;

void swap(int* number1, int* number2)
{

	int temp;
	temp = *number1;
	*number1 = *number2;
	*number2 = temp;

}

int main()
{

	int a = 10, b = 20;
	cout << "Before Swapping" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	swap(&a, &b);
	cout << "\nAfter Swapping" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	return 0;
}
