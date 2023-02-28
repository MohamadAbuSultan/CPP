

#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int r;
	cin >> r;

	const float PI = 3.14;

	float Area = PI * pow(r, 2);

	cout << ceil(Area) << endl;
}
