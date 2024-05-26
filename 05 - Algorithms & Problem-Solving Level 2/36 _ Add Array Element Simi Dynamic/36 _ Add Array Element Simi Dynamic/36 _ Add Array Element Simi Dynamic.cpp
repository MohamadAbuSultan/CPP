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

int FillArrayWithValues(int arr[100], int &arrLength) {
	int number;
	bool check = true;
	while (check)
	{
		number = ReadPositiveNumber("Enter A Number: ");
		arr[arrLength] = number;
		cout << "Do you want to add more number? 0 for no, 1 for yes / ";
		cin >> check;
		arrLength++;
	}
	return arrLength;
}

void PrintArray(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
}
int main()
{
	int arr[100];
	int arrLength = 0;

	cout << "\n\nArray Length: " << FillArrayWithValues(arr, arrLength);
	
	cout << "\n\nArray Elements: ";
	PrintArray(arr, arrLength);

	cout << endl;
}
