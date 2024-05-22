#include <iostream>

using namespace std;

int RandomNumber(int From, int To) {
	int randNumber = rand() % (To - From + 1) + From;
	return randNumber;
}

void FillArrayWithRandomNumbers(int arr[100], int &arrLength) {
	
	cout << "Enter A number of Elements: ";
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
}

void PrintArrayResults(int arr[100], int arrLength) {
	cout << "\nArray Elements: ";
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrLength;

	FillArrayWithRandomNumbers(arr, arrLength);

	PrintArrayResults(arr, arrLength);

	return 0;
}