
#include <iostream>
#include <string>
using namespace std;
/// array is a variable that can store multiple values of the same type
// أنهم يكونوا من نفس النوع array شرط ال 

int main()
{
	string FullName = "mohamad abu-sultan";
	cout << FullName[0] << endl;
	cout << FullName[2] << endl;
	cout << FullName[6] << endl;

	int x[5] = { 22,18,2,55,520 };
	// وعدد العناصر 5 int عناصرها كلهم  array يعني عرفلي 
	
	cout << x[0] << endl;
	cout << x[1] << endl;
	cout << x[2] << endl;
	cout << x[3] << endl;
	cout << x[4] << endl;

	int y[6];
	y[0] = 10;
	y[1] = 20;
	cout << y[0] + y[1] << endl;

	float z[10];

	return 0;
}
