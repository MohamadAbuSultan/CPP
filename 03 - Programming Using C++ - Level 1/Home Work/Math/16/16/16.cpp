

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, d;
	cin >> a >> d;

	float Area = a * sqrt(pow(d, 2) - pow(a, 2));

	cout << Area << endl;

	return 0;
}
