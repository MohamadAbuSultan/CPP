
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int L;
	cin >> L;

	const float PI = 3.14;

	float Area = (pow(L, 2)) / (4 * PI);

	cout << floor(Area) << endl;
}
