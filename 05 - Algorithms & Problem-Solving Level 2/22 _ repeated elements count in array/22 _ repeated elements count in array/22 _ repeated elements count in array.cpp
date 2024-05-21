#include <iostream>
#include <vector>

using namespace std;

int ReadPositiveNumber(string Message) {
	int Number;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

vector<int> ReadArrayNumbers(int Number) {
	vector<int> result;
	int Number2;
	for (int i = 1; i <= Number; i++)
	{
		cout << "Element [" << i << "]: ";
		cin >> Number2;
		result.push_back(Number2);
	}
	return result;
}

int PrintRepeatedElementsCount(vector<int> &Result, short numberToCheck) {
	int Counter = 0;
	for (int i = 0; i < Result.size(); i++)
	{
		if (Result[i] == numberToCheck) Counter++;
	}
	return Counter;
}

void PrintOriginalArray(vector<int>& Result) {
	for (int i = 0; i < Result.size(); i++)
	{
		cout << Result[i] << " ";
	}
}

int main()
{
	int Number1 = ReadPositiveNumber("Enter A Positive Integer");
	vector<int> NumbersOfArray = ReadArrayNumbers(Number1);

	int Number2 = ReadPositiveNumber("Enter A Number To Check");
	cout << "Count of repeated elements: " << PrintRepeatedElementsCount(NumbersOfArray, Number2) << endl;

	cout << "Original array: ";
	PrintOriginalArray(NumbersOfArray);
}