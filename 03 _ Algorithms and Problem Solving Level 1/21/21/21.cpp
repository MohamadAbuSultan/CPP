

#include <iostream>
#include <cmath>
using namespace std;

float ReadCircumference() {
	float L;
	cout << "Enter L : ";
	cin >> L;
	return L;
}

float CircleAreaByCircumference(float L) {
	const float PI = 3.14159;
	float Area = (pow(L, 2) / (4 * PI));
	return Area;
}

void PrintResult(float Area) {
	cout << "Circle Area = " << Area << endl;
}

int main()
{
	PrintResult(CircleAreaByCircumference(ReadCircumference()));
}
