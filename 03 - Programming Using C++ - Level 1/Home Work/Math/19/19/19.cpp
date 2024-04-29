
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int D;
	cin >> D;

	const float PI = 3.14;

	float Area = (PI * pow(D, 2)) / 4;

	cout << ceil(Area) << endl;
}
