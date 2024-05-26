#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message) {
    int inputNumber;

	do
	{

		cout << Message << " ";

		cin >> inputNumber;

	} while (inputNumber <= 0);

	return inputNumber;
}

int FillArrayWithValues(int arr[100], int& numberOfElements) {
	int inputNumber;
	bool continueAddingNumbers = true;

	do
	{
		inputNumber = ReadPositiveNumber("Enter A Number: ");

		arr[numberOfElements++] = inputNumber;

		cout << "Do you want to add more number? 0 for no, 1 for yes / ";
		cin >> continueAddingNumbers;

	} while (continueAddingNumbers && numberOfElements < 100);
	
	return numberOfElements;
}

void PrintArray(int arr[100], int numberOfElements) {
	for (int i = 0; i < numberOfElements; i++)
		cout << arr[i] << " ";
}

int main()
{
	int arr[100];
	int numberOfElements = 0;

	FillArrayWithValues(arr, numberOfElements);
	
	cout << "\nArray Length: ";
	cout << numberOfElements;

	cout << "\n\nArray Elements: ";
	PrintArray(arr, numberOfElements);

	cout << endl;
}
