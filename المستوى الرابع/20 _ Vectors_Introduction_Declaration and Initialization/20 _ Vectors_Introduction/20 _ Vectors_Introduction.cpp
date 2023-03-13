
#include <iostream>
#include <vector>
using namespace std;

// Vector = Dynamic Array

int main()
{
	// vector <T> vector_name;
	vector <int> vNumbers = { 10,20,30,40,50 };

	cout << "Numbers Vector = ";

	// ranged loop
	for (int &Number : vNumbers)
	{
		cout << Number << " ";
	}
	cout << endl;

	return 0;
}
