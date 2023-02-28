

#include <iostream>
#include <cmath>
using namespace std;

float CircleIsoscelsTriangle(float a, float b) {
	const float PI = 3.14;
	float Area = PI * ((pow(b, 2)) / 4) * ((2 * a - b) / (2 * a + b));
	return Area;
}

int main()
{
	float a, b;
	cin >> a >> b;
	cout << CircleIsoscelsTriangle(a, b);
}
