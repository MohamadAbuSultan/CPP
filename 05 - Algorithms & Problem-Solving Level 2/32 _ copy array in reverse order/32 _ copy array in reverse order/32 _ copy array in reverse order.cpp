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

int GeneratRandomNumber(int From, int To) {
	int randNumber = rand() % (To - From + 1) + From;
	return randNumber;
}

void FillArrayWithRandomValues(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
		arr[i] = GeneratRandomNumber(1, 100);
}

void PrintArray(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
}

void CopyArrayInReversedOrder(int arrSource[100],int arrDistination[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
		arrDistination[i] = arrSource[arrLength - 1 - i];
	
	/* 
	MY_Solution
	for (int i = arrLength - 1; i >= 0; i--)
		arrDistination[arrLength - 1 - i] = arrSource[i];*/
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100];
	int arrLength = ReadPositiveNumber("Enter A Positve Number: ");

	FillArrayWithRandomValues(arr, arrLength);

	cout << "\nArray1 Values: ";
	PrintArray(arr, arrLength);

	int arr2[100];
	CopyArrayInReversedOrder(arr, arr2, arrLength);

	cout << "\n\nArray2 Values: ";
	PrintArray(arr2, arrLength);
}
