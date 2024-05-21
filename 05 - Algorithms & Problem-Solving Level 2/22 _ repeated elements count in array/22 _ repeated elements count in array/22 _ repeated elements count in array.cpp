#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number;
	do
	{
		cout << Message << " ";
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

void ReadArrayElements(int arr[100], int& arrLength) {
	
	cout << "\nEnter number of elements:";
	cin >> arrLength;

	cout << "\nEnter Array of Elements:\n";
	for (int i = 1; i <= arrLength; i++)
	{
		cout << "Element [" << i << "]: ";
		cin >> arr[i];
	}

	cout << endl;
}

void PrintArrayElements(int arr[100], int arrLength) {
	for (int i = 1; i <= arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int TimesRepeated(int Number, int arr[100], int arrLength) {
	int Counter = 0;
	for (int i = 1; i <= arrLength; i++)
	{
		if (Number == arr[i]) Counter++;
	}
	return Counter;
}

int main()
{
	int arr[100], arrLength, NumberToCheck;

	ReadArrayElements(arr, arrLength);

	NumberToCheck = ReadPositiveNumber("Enter A Positive Element");

	cout << "\nOriginally array: ";
	PrintArrayElements(arr, arrLength);

	cout << "\nNumber " << NumberToCheck;
	cout << " is reapeated ";
	cout << TimesRepeated(NumberToCheck, arr, arrLength);
	cout << " time(s)\n";
}
