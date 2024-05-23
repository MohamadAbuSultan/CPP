#include <iostream>

using namespace std;

int GenerateRandomNumber(int From, int To) {
	int randNumber = rand() % (To - From + 1) + From;
	return randNumber;
}

void FillArrayWithRandomValues(int arr[100], int& arrLength) {
	cout << "Enter Array Length: ";
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

void CopyArray(int arrSource[100], int arrDestination[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
	{
		arrDestination[i] = arrSource[i];
	}
}
int main()
{
	srand((unsigned)time(NULL));

	int arr[100],arrLength;

	FillArrayWithRandomValues(arr, arrLength);

	cout << "\nArray1 Elements: ";
	PrintArray(arr, arrLength);

	int arr2[100];
	CopyArray(arr, arr2, arrLength);

	cout << "\n\nArray2 Elements: ";
	PrintArray(arr2, arrLength);

	cout << endl;
}
