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

enum enPrimNotPrime { Prime = 1, NotPrime = 2 };

enPrimNotPrime CheckPrime(int number) {
	int m = round(number / 2);
	for (int i = 2; i <= m; i++)
		if (number % i == 0) return enPrimNotPrime::NotPrime;
	return enPrimNotPrime::Prime;
}

void FillArrayWithRandomValues(int arr[100], int numberOfElements) {
	for (int i = 0; i < numberOfElements; i++)
		arr[i] = GenerateRandomNumber(1, 100);
}

void PrintArray(int arr[100], int numberOfElements) {
	for (int i = 0; i < numberOfElements; i++)
		cout << arr[i] << " ";
}

void AddArrayElements(int arr[100], int& numberOfElements, int number) {
	numberOfElements++;
	arr[numberOfElements - 1] = number;
}

void CopyPrimeNumbers(int arrSource[100], int arrDestination[100],
	int arrLength, int& arrDestinationLength) {
	for (int i = 0; i < arrLength; i++)
		if (CheckPrime(arrSource[i]) == enPrimNotPrime::Prime)
			AddArrayElements(arrDestination, arrDestinationLength, arrSource[i]);
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100];
	int arrLength = ReadPositiveNumber("Enter A Positive Number: ");

	FillArrayWithRandomValues(arr, arrLength);

	int arr2[100], arr2Length = 0;
	CopyPrimeNumbers(arr, arr2, arrLength, arr2Length);

	cout << "\nArray 1 elements:\n";
	PrintArray(arr, arrLength);

	cout << "\n\nArray 2 Prime numbers:\n";
	PrintArray(arr2, arr2Length);

	cout << endl;

	return 0;
}