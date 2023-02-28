
#include <iostream>
using namespace std;

void ReadNumbers(int& A, int& H) {

	cout << "Enter A : " << endl;
	cin >> A;

	cout << "Enter H : " << endl;
	cin >> H;

}

float CalculateTriangleArea(int A, int H) {
	return (A / 2) * H;
}

void PrintResult(int Area) {
	cout << Area;
}

int main()
{
	int A, H;
	ReadNumbers(A, H);
	PrintResult(CalculateTriangleArea(A, H));
}