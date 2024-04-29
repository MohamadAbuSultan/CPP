
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, b;
	cin >> a >> b;
	const double PI = 3.14159;
	double Area = (PI * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b)));
	cout << Area << endl;
}
