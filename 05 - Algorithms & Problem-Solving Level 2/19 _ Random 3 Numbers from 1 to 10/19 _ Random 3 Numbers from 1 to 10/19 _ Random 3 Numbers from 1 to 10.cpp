#include <iostream>

using namespace std;

int RandomNumber(int From, int To) {
	int randumNumber = rand() % (To - From + 1) + From;
	return randumNumber;
}
int main()
{
	srand((unsigned)time(NULL));

	cout << RandomNumber(1,10) << endl;
	cout << RandomNumber(1,10) << endl;
	cout << RandomNumber(1,10) << endl;
}
