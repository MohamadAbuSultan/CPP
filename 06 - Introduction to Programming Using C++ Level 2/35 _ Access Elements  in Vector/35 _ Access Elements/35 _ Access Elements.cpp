

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> num{ 10,20,30,40,50 };

	cout << "\n\n  using .at(i)\n";
	cout << "Element in index 0: " << num.at(0) << endl;
	cout << "Element in index 1: " << num.at(1) << endl;
	cout << "Element in index 2: " << num.at(2) << endl;
	cout << "Element in index 3: " << num.at(3) << endl;
	cout << "Element in index 4: " << num.at(4) << endl;


	cout << "\n\n  using [i]\n";
	cout << "Element in index 0: " << num[0] << endl;
	cout << "Element in index 1: " << num[1] << endl;
	cout << "Element in index 2: " << num[2] << endl;
	cout << "Element in index 1: " << num[3] << endl;
	cout << "Element in index 2: " << num[4] << endl;

	return 0;

}
