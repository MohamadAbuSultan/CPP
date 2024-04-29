
#include <iostream>
#include <cmath>
using namespace std;

float ReadSquareSide() {
	float A;
	cout << "Enter A : " << endl;
	cin >> A;
	return A;
}

float CircleAreaInscribedInSquare(float A) {
	const float PI = 3.14159;
	float Area = (PI * pow(A, 2)) / 4;
	return Area;
}

void PrintResult(float Area) {
	cout << "Circle Area = " << Area << endl;
}

int main()
{
	PrintResult(CircleAreaInscribedInSquare(ReadSquareSide()));
}
