#include <iostream>

using namespace std;

void FillArrayWithNumber(int arr[100], int& arrLength) {
	arrLength = 6;
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 30;
	arr[4] = 20;
	arr[5] = 10;
}

void PrintArray(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
}

bool IsPalindromeArray(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
		if (arr[i] != arr[arrLength - 1 - i]) 
			return false;
	return true;
}

int main()
{
	int arr[100], arrLength = 0;

	FillArrayWithNumber(arr, arrLength);

	cout << "Array1 Elements: ";
	PrintArray(arr, arrLength);

	cout << endl;

	if(IsPalindromeArray(arr, arrLength))
		cout << "Your Array Is Palindrome";
	else
		cout << "Your Array Is Not Palindrome";
}
