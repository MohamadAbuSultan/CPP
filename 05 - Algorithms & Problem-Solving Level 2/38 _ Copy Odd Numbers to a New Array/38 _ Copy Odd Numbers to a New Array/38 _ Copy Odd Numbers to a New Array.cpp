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

void FillArrayWithRandomNumbers(int arr[100], int numberOfElements)
{
	for (int i = 0; i < numberOfElements; i++)
		arr[i] = GenerateRandomNumber(1, 100);
}

void PrintArray(int arr[100], int numberOfElements)
{
	for (int i = 0; i < numberOfElements; i++)
		cout << arr[i] << " ";
}

void AddArrayElement(int arr[100], int& numberOfElements, int number) {
	numberOfElements++;
	arr[numberOfElements - 1] = number;
}

void CopyOddNumbersArray(int arrSource[100], int numberOfElementsArr1, int arrDistination[100], int& numberOfElementsArr2) {
	for (int i = 0; i < numberOfElementsArr1; i++)
		if (arrSource[i] % 2 != 0)
			AddArrayElement(arrDistination, numberOfElementsArr2, arrSource[i]);
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100];
	int numberOfElementsArr1 = ReadPositiveNumber("Enter Array Size: ");

	FillArrayWithRandomNumbers(arr, numberOfElementsArr1);

	cout << "\nArray1 Elements: ";
	PrintArray(arr, numberOfElementsArr1);

	int arr2[100], numberOfElementsArr2 = 0;

	CopyOddNumbersArray(arr, numberOfElementsArr1, arr2, numberOfElementsArr2);

	cout << "\n\nArray2 Elements: ";
	PrintArray(arr2, numberOfElementsArr2);
	
	cout << endl;
}