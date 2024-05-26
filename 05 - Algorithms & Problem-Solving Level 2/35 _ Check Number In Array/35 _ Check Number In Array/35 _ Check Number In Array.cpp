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

int FindNumberPositionInArray(int arr[100], int arrLength, int Number) {
	for (int i = 0; i < arrLength; i++)
		if (arr[i] == Number) return i;
	return -1;
}

bool CheckNumberInArray(int arr[100], int arrLength, int Number) {
	return FindNumberPositionInArray(arr, arrLength, Number) != -1;
	// return FindNumberPositionInArray(arr, arrLength, Number) >= 0;
}

int main()
{
	srand((unsigned)time(NULL));
	
	int arr[100];
	int arrLength = ReadPositiveNumber("Enter A positive Number: ");
	FillArrayWithRandomValues(arr, arrLength);

	cout << "Array Elements: ";
	PrintArray(arr, arrLength);

	int Number = ReadPositiveNumber("\n\nEnter A Number To Search For: ");

	cout << "\n\nNumber You are Looking For: " << Number;

	cout << "\n\n";

	if (!CheckNumberInArray(arr, arrLength, Number)) 
		cout << "No its not found";
	else 
		cout << "Yes Its Found";
	cout << endl;
}