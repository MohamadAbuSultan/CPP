
#include <iostream>

using namespace std;

void FillArray(int arr[100], int& arrLength)
{
	arrLength = 6;
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 30;
	arr[4] = 20;
	arr[5] = 10;
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << "\n";
}

bool IsPalindromArray(int arr[100], int arrLength)
{

	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] != arr[arrLength - i - 1])
			return false;
	}

	return true;
}

int main()
{
	int arr[100], arrLength = 0;
	FillArray(arr, arrLength);

	cout << "\nArray Elements\n";
	PrintArray(arr, arrLength);

	if (IsPalindromArray(arr, arrLength))
		cout << "\narray is palindrom\n";
	else
		cout << "\narray is'nt palindrom\n";

	return 0;
}
