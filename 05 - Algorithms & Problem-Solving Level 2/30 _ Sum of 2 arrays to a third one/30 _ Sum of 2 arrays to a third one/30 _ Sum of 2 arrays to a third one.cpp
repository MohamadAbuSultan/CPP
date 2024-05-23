#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message) {
	int Number;
	do
	{
		cout << Message << " ";
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

int GenerateRandomNumber(int From, int To) {
	int randNumber = rand() % (To - From + 1) + From;
	return randNumber;
}

void FillArrayWithRandomValues(int arr[100], int& arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = GenerateRandomNumber(1, 100);
	}
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
}

void SumOfTwoArray(int arrSum[100], int arrSource[100], int arrDestination[100], int arrLength) {
	for (size_t i = 0; i < arrLength; i++)
	{
		arrSum[i] = arrSource[i] + arrDestination[i];
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arr2[100], arrSum[100];
	int arrLength = ReadPositiveNumber("Enter The Size Of The Array: ");

	FillArrayWithRandomValues(arr, arrLength);
	FillArrayWithRandomValues(arr2, arrLength);

	SumOfTwoArray(arrSum, arr, arr2, arrLength);

	cout << "\nArray1 Values: ";
	PrintArray(arr, arrLength);
	
	cout << "\n\nArray2 Values: ";
	PrintArray(arr2, arrLength);

	cout << "\n\nSum Of Two Arrays: ";
	PrintArray(arrSum, arrLength);

	cout << endl;

	return 0;
}
