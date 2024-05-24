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

int GenerateRandomValues(int From, int To) {
	int randNumber = rand() % (To - From + 1) + From;
	return randNumber;
}

void SwapNumbers(int& Number1, int& Number2) {
	int Temp;
	
	Temp = Number1;
	Number1 = Number2;
	Number2 = Temp;
}

void FillArrayWithRandomValues(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = i + 1;
	}
}

void PrintArrayValues(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
}

void ShuffleArrayValues(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
	{
		SwapNumbers(arr[GenerateRandomValues(1, arrLength) - 1]
			, arr[GenerateRandomValues(1, arrLength) - 1]);
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100];
	int arrLength = ReadPositiveNumber("Enter A Positive Number: ");

	FillArrayWithRandomValues(arr, arrLength);

	cout << "\nArray Values: ";
	PrintArrayValues(arr, arrLength);

	ShuffleArrayValues(arr, arrLength);

	cout << "\n\nShuffle Array Values: ";
	PrintArrayValues(arr, arrLength);
}