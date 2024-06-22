#include <iostream>

using namespace std;

int GenerateRandomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short rows, short cols) {
	for (short i = 0; i < rows; i++)
		for (short j = 0; j < cols; j++)
			arr[i][j] = GenerateRandomNumber(1, 100);
}

void PrintMatrix(int arr[3][3], short rows, short cols) {
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
}

int RowSum(int arr[3][3], short rowNumber, short cols) {
	int sum = 0;
	for (short j = 0; j < cols; j++)
		sum += arr[rowNumber][j];
	return sum;
}

void SumMatrixRowsInArray(int arr[3][3], int arrSum[3], short rows, short cols) {
	for (short i = 0; i < rows; i++)
		arrSum[i] = RowSum(arr, i, cols);
}

void PrintRowsSumArray(int arr[3], short rows) {
	for (short i = 0; i < rows; i++)
		printf("Row %d Sum = %d\n", i + 1, arr[i]);
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3];
	int arrSum[3];

	FillMatrixWithRandomNumbers(arr, 3, 3);

	PrintMatrix(arr, 3, 3);

	SumMatrixRowsInArray(arr, arrSum, 3, 3);

	PrintRowsSumArray(arrSum, 3);
}