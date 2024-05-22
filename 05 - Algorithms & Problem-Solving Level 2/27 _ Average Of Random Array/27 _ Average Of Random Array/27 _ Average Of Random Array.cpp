#include <iostream>

using namespace std;

int GenerateRandomValues(int From, int To) {
	int randNumber = rand() % (To - From + 1) + From;
	return randNumber;
}

void FillArrayWithRandomValues(int arr[100], int& arrLength) {
	cout << "Enter size of array: ";
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = GenerateRandomValues(1, 100);
	}
}

void PrintArray(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
}

int CalculateSumOfValuesInRandomArray(int arr[100], int arrLength) {
	int sumArray = 0;
	for (int i = 0; i < arrLength; i++)
	{
		sumArray += arr[i];
	}
	return sumArray;
}

float CalculateAverageOfValuesInRandomArray(int arr[100], int arrLength) {
	return (float) CalculateSumOfValuesInRandomArray(arr, arrLength) / arrLength;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrLength;

	FillArrayWithRandomValues(arr, arrLength);

	cout << "\nRandom Array Values: ";
	PrintArray(arr, arrLength);

	cout << "\n\nAverage of values in the random array: ";
	cout << CalculateAverageOfValuesInRandomArray(arr, arrLength);

	cout << endl;

	return 0;
}
