#include <iostream>

using namespace std;

int GenerateRandomNumber(int From, int To) {
	int randNumber = rand() % (To - From + 1) + From;
	return randNumber;
}

void FillArrayWithRandomValues(int arr[100], int& arrLength) {
	cout << "Enter size of array: ";
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

int FindMinNumberInArray(int arr[100], int arrlength) {
	int minNumber = arr[0];
	for (int i = 1; i < arrlength; i++)
	{
		if (minNumber > arr[i]) minNumber = arr[i];
	}
	return minNumber;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrLength;
	 
	FillArrayWithRandomValues(arr, arrLength);

	cout << "\nArray Elements: ";
	PrintArray(arr, arrLength);

	cout << "\n\nMin Number: ";
	cout << FindMinNumberInArray(arr, arrLength);
	
	cout << endl;

	return 0;
}