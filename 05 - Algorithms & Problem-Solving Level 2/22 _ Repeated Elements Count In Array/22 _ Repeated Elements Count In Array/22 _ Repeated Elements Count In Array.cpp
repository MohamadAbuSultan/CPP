#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{

	int Number = 0;

	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;

}

void ReadArrayNumbers(int arr[100], int &arrLength)
{

	cout << "Enter Number of Elements : " << endl;
	cin >> arrLength;

	cout << "\nEnter Array Elements : " << endl;
	for (int i = 0; i < arrLength; i++)
	{
		cout << "Element {" << i + 1 << "} : ";
		cin >> arr[i];
	}
	cout << endl;

}

void PrintArrayNumbers(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int TimesRepeated(int Number, int arr[100], int arrLength)
{
	int count = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (Number == arr[i])
			count++;
	}
	return count;
}

int main()
{
	int arr[100], arrLength, numberToCheck;

	ReadArrayNumbers(arr, arrLength);

	numberToCheck = ReadPositiveNumber("Enter the number you want to check");

	cout << "\nOriginal Array: ";
	PrintArrayNumbers(arr, arrLength);

	cout << "\nNumber " << numberToCheck;
	cout << " is repeated ";
	cout << TimesRepeated(numberToCheck, arr, arrLength) << " time(s)\n";

	return 0;

}