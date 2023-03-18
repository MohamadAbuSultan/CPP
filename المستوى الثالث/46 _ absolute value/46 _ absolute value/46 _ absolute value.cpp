

#include <iostream>

using namespace std;

float ReadNumber()
{
	float Number = 0;
	cout << "enter a number : ";
	cin >> Number;
	return Number;
}

float MyABS(float Number)
{
	if (Number > 0)
		return Number;
	else
		return Number * -1;
}

int main()
{
	cout << "My ABS : ";
	cout << MyABS(ReadNumber());
	cout << "\nC++ ABS : ";
	cout << abs(ReadNumber());
}
