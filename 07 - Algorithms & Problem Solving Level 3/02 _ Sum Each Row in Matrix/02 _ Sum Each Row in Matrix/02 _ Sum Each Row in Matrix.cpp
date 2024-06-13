#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int GenerateRandomNumber(int from, int to)
{
	return rand() % (to - from + 1) + from;
}

void Fill2DArrayWithRandomNumbers(int arr[3][3], int rows, int columns) {
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < columns; j++)
			arr[i][j] = GenerateRandomNumber(1, 100);
}

void Print2DArrayValues(int arr[3][3], int rows, int columns) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++)
			cout << setw(3) << arr[i][j] << "\t";
		cout << endl;
	}
}

int RowSums(int arr[3][3], short rowNumber, short columns) {
	int sum = 0;
	for (int j = 0; j < columns; j++)
		sum += arr[rowNumber][j];
	return sum;
}

void PrintEachRowSum(int arr[3][3], short rows, short columns) {
	for (int i = 0; i < rows; i++)
		cout << "Sum of row " << i + 1 << " is: " << RowSums(arr, i, columns) << endl;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3];
	Fill2DArrayWithRandomNumbers(arr, 3, 3);

	Print2DArrayValues(arr, 3, 3);

	cout << endl; 

	PrintEachRowSum(arr, 3, 3);

	return 0;
}