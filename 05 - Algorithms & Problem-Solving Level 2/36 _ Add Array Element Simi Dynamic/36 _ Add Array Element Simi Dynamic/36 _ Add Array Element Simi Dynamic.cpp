#include <iostream>

using namespace std;

int ReadNumber() {
	int number;

	cout << "Enter A Number: ";
	cin >> number;

	return number;
}

void AddArrayElement(int number, int arr[100], int& numberOfElements)
{
	numberOfElements++;
	arr[numberOfElements - 1] = number;
}

void InputUserNumberInArray(int arr[100], int& numberOfElements) {
	bool addMore = true;
	
	do
	{
		AddArrayElement(ReadNumber(), arr, numberOfElements);

		cout << "Do you want to add more numbers? [1]: yes  [0]: no :";
		cin >> addMore;	

	} while (addMore);

}

void PrintArray(int arr[100], int numberOfElements) {
	for (int i = 0; i < numberOfElements; i++)
		cout << arr[i] << " ";
}

int main()
{
	int arr[100], numberOfElements = 0;

	InputUserNumberInArray(arr, numberOfElements);

	cout << "\nNumber Of Elements: ";
	cout << numberOfElements;

	cout << "\n\nArray Elements: ";
	PrintArray(arr, numberOfElements);

	cout << endl;
}