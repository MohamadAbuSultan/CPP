
#include <iostream>

using namespace std;

int main()
{
	int arr[] = { 10,20,30,40,50 };
	int* ptr = arr;

	/*cout << "Address Are : \n";
	cout << ptr << endl;
	cout << ptr + 1 << endl;
	cout << ptr + 2 << endl;
	cout << ptr + 3 << endl;
	cout << ptr + 4 << endl;

	cout << "\nValues Are : \n";
	cout << *(ptr) << endl;
	cout << *(ptr + 1) << endl;
	cout << *(ptr + 2) << endl;
	cout << *(ptr + 3) << endl;
	cout << *(ptr + 4) << endl;*/


	for (int &Value : arr)
	{
		cout << "Value are : " << *(ptr++) << "\t" << "Address are : " << ptr;
		cout << endl;
	}
}
