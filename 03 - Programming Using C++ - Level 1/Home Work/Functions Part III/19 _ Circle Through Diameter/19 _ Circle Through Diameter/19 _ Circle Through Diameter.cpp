
#include <iostream>
#include <cmath>
using namespace std;

float CircleAreaDiameter(int D) {
	const float PI = 3.14;
	return (PI * (pow(D, 2)))/4;
}

int main()
{
	int D;
	cin >> D;
	cout << CircleAreaDiameter(D);
}
