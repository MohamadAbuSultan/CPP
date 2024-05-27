#include <iostream>

using namespace std;

void FillArrayWithNumbers(int arr[100], int& arrLength) {
	arrLength = 10;
	arr[0] = 50;
	arr[1] = 50;
	arr[2] = 50;
	arr[3] = 70;
	arr[4] = 70;
	arr[5] = 70;
	arr[6] = 70;
	arr[7] = 70;
	arr[8] = 90;
	arr[9] = 90;
}

void PrintArray(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
}

short FindNumberPositionInArray(int number, int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
		if(arr[i] == number) 
			return i;
	return -1;
}

bool IsNumberInArray(int Number, int arr[100], int arrLength) {
	return FindNumberPositionInArray(Number, arr, arrLength) != -1;
}

void AddArrayElement(int number, int arr[100], int& arrLength) {
	arrLength++;
	arr[arrLength - 1] = number;
}

void CopyDistinctNumbersToArray(int arrSource[100], int arrDestination[100], int arr1Length, int& arr2Length) {
	for (int i = 0; i < arr1Length; i++)
		if (!IsNumberInArray(arrSource[i], arrDestination, arr2Length))
			AddArrayElement(arrSource[i], arrDestination, arr2Length);
}

int main()
{
	int arr[100], arrLength = 0;

	FillArrayWithNumbers(arr, arrLength);

	cout << "\nArray1 Elements: ";
	PrintArray(arr, arrLength);

	int arr2[100], arr2Length = 0;
	CopyDistinctNumbersToArray(arr, arr2, arrLength, arr2Length);

	cout << "\n\nArray2 Elements: ";
	PrintArray(arr2, arr2Length);

	cout << endl;
}