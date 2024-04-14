

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	// Problem #19 - Circle Area Through Diameter
	double D;
	cin >> D;
	const double PI = 3.14159;
	double Area = ((PI * (pow(D, 2))) / 4);
	cout << Area << endl;
}
