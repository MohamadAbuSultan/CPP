#include <iostream>

using namespace std;

int ReadPositiveNumber(string message) {
	int number;
	do
	{
		cout << message << " ";
		cin >> number;
	} while (number <= 0);
	return number;
}

int GenerateRandomNumber(int from, int to) {
	return rand() % (to - from + 1) + from;
}

void FillArrayWithRandomNumbers(int arr[100], int numberOfElements) {
	for (int i = 0; i < numberOfElements; i++)
		arr[i] = GenerateRandomNumber(1, 100);
}

void PrintArray(int arr[100], int numberOfElements) {
	for (int i = 0; i < numberOfElements; i++)
		cout << arr[i] << " ";
}

bool IsPrime(int number) {
	int m = round(number / 2);
	for (int i = 2; i <= m; i++)
		if (number % i == 0)
			return false;
	return true;
}

void AddArrayElement(int number, int arr[100], int& numberOfElemnts) {
	numberOfElemnts++;
	arr[numberOfElemnts - 1] = number;
}

void CopyPrimeNumbersToArray(int arrSource[100], int arrPrime[100], int numberOfElements1, int &numberOfElements2) {
	for (int i = 0; i < numberOfElements1; i++)
		if (IsPrime(arrSource[i])) 
			AddArrayElement(arrSource[i], arrPrime, numberOfElements2);
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100];
	int numberOfElements1 = ReadPositiveNumber("Enter A Positive Number: ");

	FillArrayWithRandomNumbers(arr, numberOfElements1);

	cout << "\nArray1 Elements: ";
	PrintArray(arr, numberOfElements1);

	int arr2[100];
	int numberOfElements2 = 0;

	CopyPrimeNumbersToArray(arr, arr2, numberOfElements1, numberOfElements2);

	cout << "\n\nPrime Array Elements: ";
	PrintArray(arr2, numberOfElements2);
	
	cout << endl;
}