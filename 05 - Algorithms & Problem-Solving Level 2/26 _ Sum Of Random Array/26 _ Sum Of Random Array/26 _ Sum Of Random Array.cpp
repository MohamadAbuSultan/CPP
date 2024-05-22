#include <iostream>

using namespace std;

int GenerateRandomNumber(int From, int To) {
	int randNumber = rand() % (To - From + 1) + From;
	return randNumber;
}

void FillArrayWithRandomValues(int arr[100], int& arrLength) {
	cout << "Enter Size of Array: ";
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = GenerateRandomNumber(1, 100);
	}
}

void PrintArray(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
}

int CalculateSumOfNumbersInRandomArray(int arr[100], int arrLength) {
	int sumArray = 0;
	for (int i = 0; i < arrLength; i++)
	{
		sumArray += arr[i];
	}
	return sumArray;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrLength;

	FillArrayWithRandomValues(arr, arrLength);

	cout << "\nRandom Array Numbers: ";
	PrintArray(arr, arrLength);

	cout << "\n\nSum of Numbers in Random Array: ";
	cout << CalculateSumOfNumbersInRandomArray(arr, arrLength);

	cout << endl;

	return 0;
}