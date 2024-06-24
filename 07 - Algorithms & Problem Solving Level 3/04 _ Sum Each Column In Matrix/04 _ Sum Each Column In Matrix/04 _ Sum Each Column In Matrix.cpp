#include <iostream>

using namespace std;

int GenerateRandomNumber(int from, int to) {
	return rand() % (to - from + 1) + from;
}

void FillMatrixWithRandomNumber(int arr[3][3], short rows, short cols) {
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			arr[i][j] = GenerateRandomNumber(1, 100);
}

void PrintMatrix(int arr[3][3], short rows, short cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
}

int ColumnsSum(int arr[3][3], short rows, short cols) {
	int sum = 0;
	for (int i = 0; i < rows; i++)
		sum += arr[i][cols];
	return sum;
}

void PrintEachColumnsSum(int arr[3][3], short rows, short cols) {
	for (int i = 0; i < cols; i++)
		cout << "column " << i + 1 << " = " << ColumnsSum(arr, rows, i) << endl;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3];

	FillMatrixWithRandomNumber(arr, 3, 3);

	PrintMatrix(arr, 3, 3);

	PrintEachColumnsSum(arr, 3, 3);
}