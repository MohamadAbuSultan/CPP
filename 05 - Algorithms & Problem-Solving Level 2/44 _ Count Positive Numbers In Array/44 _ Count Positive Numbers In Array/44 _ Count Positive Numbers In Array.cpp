#include <iostream>

using namespace std;

int ReadPositiveNumber(string message) {
    int number;

	do
	{
		cout << message << " ";
		cin >> number;
	} while (number <= 0);
	
	return number;
}

int GenerateRandomNumber(int from, int to) {
	return rand() % (to - from + 1) + from;
}

void FillArrayWithRandomNumbers(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
		arr[i] = GenerateRandomNumber(-100, 100);
}

void PrintArray(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
}

int CountPositiveNumbersInArray(int arr[100], int arrLength) {
	int counter = 0;
	
	for (int i = 0; i < arrLength; i++)
		if (arr[i] >= 0) counter++;

	return counter;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100];
	int arrLength = ReadPositiveNumber("Enter Size Of Array");

	FillArrayWithRandomNumbers(arr, arrLength);

	cout << "\nArray1 Elements: ";
	PrintArray(arr, arrLength);

	cout << "\n\nCount Positive Number In The Array: ";
	cout << CountPositiveNumbersInArray(arr, arrLength);

	cout << endl;

	return 0;
}