#include <iostream>

using namespace std;

int RandomNumber(int from, int to) {
	return rand() % (to - from + 1) + from;
}

void FillArrayWithRandomNumbers(int arr[3][3], short Rows, short Cols) {
	for (int i = 0; i < Rows; i++)
		for (int j = 0; j < Cols; j++)
			arr[i][j] = RandomNumber(1, 100);
}

void PrintArray(int arr[3][3], short Rows, short Cols) {
	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
}

int SumColumn(int arr[3][3], short Rows, short Cols) {
	int result = 0;
	for (int i = 0; i < Rows; i++)
		result += arr[i][Cols];
	return result;
}

void SumMatrixColsInArray(int arr[3][3], int arrSum[3], short Rows, short Cols) {
	for (int i = 0; i < Cols; i++)
		arrSum[i] = SumColumn(arr, Rows, i);
}

void PrintColsSumArray(int arr[3], short Cols) {
	for (int i = 0; i < Cols; i++)
		cout << "Cols " << i + 1 << " Sum = " << arr[i] << endl;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3];
	FillArrayWithRandomNumbers(arr, 3, 3);

	PrintArray(arr, 3, 3);

	int arrSum[3];
	SumMatrixColsInArray(arr, arrSum, 3, 3);

	cout << endl;

	PrintColsSumArray(arrSum, 3);
}