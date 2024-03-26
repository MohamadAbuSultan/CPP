

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a, b, c;
	cin >> a >> b >> c;
	
	const float PI = 3.14;

	float p = (a + b + c) / 2;

	float t = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));

	float Area = PI * pow(t, 2);

	cout << round(Area) << endl;
		
}
