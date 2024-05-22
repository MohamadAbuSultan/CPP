#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message) {
	int Number;
	do
	{
		cout << Message << ": ";
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

int RandomNumbers(int From, int To) {
	int randNumber = rand() % (To - From + 1) + From;
	return randNumber;
}

void FillArrayWithRandomNumbers(int Number) {
	cout << "\nArray Elements: ";
	for (int i = 0; i < Number; i++)
	{
		cout << RandomNumbers(1,100) << " ";
	}
}

int main()
{
	srand((unsigned)time(NULL));
	FillArrayWithRandomNumbers(ReadPositiveNumber("Enter a Positive Number"));
}
