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

int GenerateRandomNumber(int From, int To) {
	return rand() % (To - From + 1) + From;
}

void FillArrayWithRandomValues(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
		arr[i] = GenerateRandomNumber(1, 100);
}

void PrintArray(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
}

short FindPositionOfNumberInArray(int arr[100], int arrLength, int Number) {
	for (int i = 0; i < arrLength; i++)
		if (arr[i] == Number)
			return i;
	return Number = -1;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100];
	int arrLength = ReadPositiveNumber("Enter Size of Array");
	
	FillArrayWithRandomValues(arr, arrLength);

	cout << "Array Elements: ";
	PrintArray(arr, arrLength);

	int Number = ReadPositiveNumber("Enter A Number to search for");

	short PositionNumber = FindPositionOfNumberInArray(arr, arrLength, Number);

	if (PositionNumber == -1) cout << Number << " is Not Found.";
	else {
		cout << "The Number Found at Position: " << PositionNumber << endl;
		cout << "Order Of Number: " << PositionNumber + 1;
	}
}