
#include <iostream>
using namespace std;
int main()
{
	float Grade[3];

	cout << "Please enter grade1 : " << endl;
	cin >> Grade[0];

	cout << "Please enter grade2 : " << endl;
	cin >> Grade[1];

	cout << "Please enter grade3 : " << endl;
	cin >> Grade[2];

	cout << "***************" << endl;

	cout << "The average of grade is : ";
	cout << (Grade[0] + Grade[1] + Grade[2]) / 3;

}
