
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> num{ 1,2,3,4,5 };

	cout << "Initial Vector: ";
	for (const int& i : num)
	{
		cout << i << " ";
	}

	cout << "\n\nUpdated Vector: ";
	for (int& i : num)
	{
		i = 20;
		cout << i << " ";
	}

	num[1] = 40;
	num.at(2) = 90;
	num.at(3) = 100;

	cout << "\n\nUpdated vector : ";

	for (const int& i : num)
	{
		cout << i << " ";
	}

	return 0;

}