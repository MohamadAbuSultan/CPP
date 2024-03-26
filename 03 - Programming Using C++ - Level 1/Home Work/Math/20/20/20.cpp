
#include <iostream>
#include <cmath>

using namespace std;


int main()
{

	int A;
	cin >> A;

	const float PI = 3.14;

	float Area = (PI * pow(A, 2)) / 4;

	cout << ceil(Area) << endl;

}
