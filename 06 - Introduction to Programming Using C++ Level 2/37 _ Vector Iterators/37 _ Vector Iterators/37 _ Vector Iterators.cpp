
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> num{ 10,20,30,40,50 };

	// declare iterator
	vector<int>::iterator iter;

	// use iterator with for loop
	for (iter = num.begin(); iter != num.end(); iter++)
	{
		cout << *iter << " ";
	}
	
	return 0;

}