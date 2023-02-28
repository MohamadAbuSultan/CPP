
#include <iostream>
using namespace std;

int main()
{
	// Syntax
	//	     for (rangeDeclaration : rangeExpression)
	//			{
	//			
	//			}
	int Array1[] = { 1,2,3,4 };
	// array is a collection of items
	// بيعتبر المصفوفة هي مجموعة من العناصر
	for (int n : Array1)
	{
		cout << n << endl;
	}

	for (int n : { 1, 2, 3, 4 })
	{
		cout << n << endl;
	}
	return 0;

}
