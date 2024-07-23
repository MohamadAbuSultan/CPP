#include <iostream>

using namespace std;

void FillMatrixWithOrderedNumbers(int arr[3][3], short Rows, short Cols) {
	int Counter = 0;

	for (short i = 0; i < Rows; i++)
		for (short j = 0; j < Cols; j++)
		{
			Counter++;
			arr[i][j] = Counter;
		}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
}

void TransposeMatrix(int arrTranspose[3][3], int arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++) 
		for (short j = 0; j < Cols; j++)
			arrTranspose[i][j] = arr[j][i];
}

int main()
{
	int arr[3][3], arrTranspose[3][3];

	cout << "\nOrdered Matrix\n";
	FillMatrixWithOrderedNumbers(arr, 3, 3);
	PrintMatrix(arr, 3, 3);


	cout << "\nTranspose Matrix\n";
	TransposeMatrix(arrTranspose, arr, 3, 3);
	PrintMatrix(arrTranspose, 3, 3);
}