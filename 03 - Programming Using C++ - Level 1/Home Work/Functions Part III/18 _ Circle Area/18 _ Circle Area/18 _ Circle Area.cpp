

#include <iostream>
#include <cmath>
using namespace std;

float CircleArea(int r) {
	const float PI = 3.14;
	return PI * pow(r, 2);
}

int main()
{
	int r;
	cin >> r;
	cout << CircleArea(r);
}
