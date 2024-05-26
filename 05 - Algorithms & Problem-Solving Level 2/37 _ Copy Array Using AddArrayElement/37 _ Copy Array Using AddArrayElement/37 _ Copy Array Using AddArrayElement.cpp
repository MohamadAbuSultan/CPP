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

void FillArrayWithRandomValues(int arr[100], int numberOfElements) {
	for (int i = 0; i < numberOfElements; i++)
		arr[i] = GenerateRandomNumber(1, 100);
}

void PrintArray(int arr[100], int numberOfElements) {
	for (int i = 0; i < numberOfElements; i++)
		cout << arr[i] << " ";
}

void AddArrayElement(int arr[100], int& numberOfElements, int number) {
	numberOfElements++;
	arr[numberOfElements - 1] = number;
}

void CopyArrayUsingAddArrayElement(int arrSource[100], int arrDistination[100], int numberOfElementsArr1, int& numberOfElementsArr2) {
	for (int i = 0; i < numberOfElementsArr1; i++)
		AddArrayElement(arrDistination, numberOfElementsArr2, arrSource[i]);
}

int main()
{
	srand((unsigned)time(NULL));

	int arr1[100];
	int numberOfElementsArr1 = ReadPositiveNumber("Enter A Positive Number: ");
	FillArrayWithRandomValues(arr1, numberOfElementsArr1);

	cout << "\nArray1 Elements: ";
	PrintArray(arr1, numberOfElementsArr1);

	int arr2[100], numberOfElementsArr2 = 0;
	CopyArrayUsingAddArrayElement(arr1, arr2, numberOfElementsArr1, numberOfElementsArr2);

	cout << "\n\nArray2 Elements: ";
	PrintArray(arr2, numberOfElementsArr2);

	cout << endl;
}