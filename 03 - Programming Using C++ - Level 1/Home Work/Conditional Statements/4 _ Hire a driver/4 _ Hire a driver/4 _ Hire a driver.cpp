

#include <iostream>
using namespace std;
int main()
{
	int Age;
	bool HasDriverLicense;
	cin >> Age >> HasDriverLicense;
	if (Age >= 21 && HasDriverLicense == true) {
		cout << "Hired" << endl;
	}
	else {
		cout << "Rejected" << endl;
	}
	return 0;
}
