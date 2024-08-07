#include <iostream>

using namespace std;

void Fibonacci(int Number) {
	int FebNum = 0;
	int Prev1 = 1, Prev2 = 0;
	cout << Prev1 << "\t";
	for (int i = 2; i <= Number; i++)
	{
		FebNum = Prev1 + Prev2;
		cout << FebNum << "\t";
		Prev2 = Prev1;
		Prev1 = FebNum;
	}
}

int main()
{
	Fibonacci(10);
}