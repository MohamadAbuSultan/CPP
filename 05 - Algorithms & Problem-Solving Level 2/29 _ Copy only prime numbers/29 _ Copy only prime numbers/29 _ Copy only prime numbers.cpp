#include <iostream>

using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

enPrimeNotPrime CheckPrime(int Number) {
	int M = round(Number / 2);
	for (int i = 2; i <= M; i++)
	{
		if (Number % i == 0) return enPrimeNotPrime::NotPrime;
	}
	return enPrimeNotPrime::Prime;
}

int GenerateRandomNumber(int From, int To) {
	int randNumber = rand() % (To - From + 1) + From;
	return randNumber;
}

void FillArrayWithRandomValues(int arr[100], int& arrLength) {
	cout << "Enter The Size OF The Array: ";
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

void PrintCopyPrimeArray(int arrSource[100], int arrDestination[100], int arrLength, int& arrLength2) {
	int Counter = 0;

	for (int i = 0; i < arrLength; i++)
	{
		if (CheckPrime(arrSource[i]) == enPrimeNotPrime::Prime) {
			arrDestination[Counter] = arrSource[i];
			Counter++;
		}
	}
	arrLength2 = Counter;
}
int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrLength;

	FillArrayWithRandomValues(arr, arrLength);

	cout << "Array1 Elements: ";
	PrintArray(arr, arrLength);

	int arr2[100], arrLength2;
	PrintCopyPrimeArray(arr, arr2, arrLength, arrLength2);

	cout << "\nArray2 Elements: ";
	PrintArray(arr2, arrLength2);
}