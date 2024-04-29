
#include <iostream>
using namespace std;
int main()
{
	int Mark1, Mark2, Mark3;
	cin >> Mark1 >> Mark2 >> Mark3;
	int Result = (Mark1 + Mark2 + Mark3) / 3;
	cout << Result << endl;
	if (Result >= 50) {
		cout << "Pass" << endl;
	}
	else {
		cout << "Fail" << endl;
	}
}
