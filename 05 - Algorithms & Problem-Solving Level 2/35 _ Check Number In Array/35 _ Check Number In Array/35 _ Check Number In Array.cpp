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

int ReturnIndexNumber(int arr[100], int arrLength, int Number) {
	for (int i = 0; i < arrLength; i++)
		if (arr[i] == Number) return i;
	return -1;
}

bool CheckNumberInArray(int arr[100], int arrLength, int Number) {
	return ReturnIndexNumber(arr, arrLength, Number) >= 0;
}

int main()
{
	srand((unsigned)time(NULL));
	
	int arr[100];
	int arrLength = ReadPositiveNumber("Enter A positive Number: ");

	FillArrayWithRandomValues(arr, arrLength);

	PrintArray(arr, arrLength);

	int Number = ReadPositiveNumber("Enter A Number To Search For: ");

	cout << "Number You are Looking For: " << Number;

	cout << endl;

	if (CheckNumberInArray(arr, arrLength, Number)) cout << "Yes Its Found";
	else cout << "No its not found";
}