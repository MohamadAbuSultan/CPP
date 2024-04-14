

#include <iostream>
#include <cmath>
using namespace std;


int main()
{

	float a, b;
	cin >> a >> b;

	const float PI = 3.14;

	float Area = PI * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));

	cout << floor(Area) << endl;

}
