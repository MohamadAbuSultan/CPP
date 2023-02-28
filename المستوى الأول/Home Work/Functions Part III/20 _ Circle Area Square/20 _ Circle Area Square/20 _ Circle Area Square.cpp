

#include <iostream>
#include <cmath>
using namespace std;

float CircleAreaSquare(int A) {
	const float PI = 3.14;
	float Area = (PI * pow(A, 2)) / 4;

	return Area;
}

int main()
{
	int A;
	cin >> A;
	cout << CircleAreaSquare(A);
}
