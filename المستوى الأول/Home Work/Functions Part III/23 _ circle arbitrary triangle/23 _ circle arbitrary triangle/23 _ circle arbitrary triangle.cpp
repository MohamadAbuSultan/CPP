
#include <iostream>
#include <cmath>
using namespace std;

float CircleArbitrary(float a, float b, float c) {
	const float PI = 3.14;
	float p = (a + b + c) / 2;
	float Area = PI * pow(((a * b * c) / ((4 * sqrt(p * (p - a) * (p - b) * (p - c))))), 2);
	return Area;
}

int main()
{
	float a, b, c;
	cin >> a >> b >> c;
	cout << CircleArbitrary(a, b, c);
}
