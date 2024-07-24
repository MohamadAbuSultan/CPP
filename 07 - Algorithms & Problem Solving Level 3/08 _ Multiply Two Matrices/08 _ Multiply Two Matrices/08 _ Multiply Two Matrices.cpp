#include <iostream>
#include <iomanip>

using namespace std;

int RandomNumber(int from, int to) {
	return rand() % (to - from + 1) + from;
}

void FillArrayWithRandomNumbers(int arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++)
		for (short j = 0; j < Cols; j++)
			arr[i][j] = RandomNumber(1, 100);
}

void PrintArray(int arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++)
			cout << setw(2) << setfill('0') 
					<< arr[i][j] << " ";
		cout << endl;
	}
}

void MultiplyMatrixes(int arrResult[3][3], int arr1[3][3], int arr2[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++)
		for (short j = 0; j < Cols; j++)
			arrResult[j][i] = arr1[j][i] * arr2[j][i];
			// arrResult[i][j] = arr1[i][j] * arr2[i][j]; // same result
}

int main()
{
	srand((unsigned)time(NULL));

	int arrResult[3][3], arr1[3][3], arr2[3][3];
	FillArrayWithRandomNumbers(arr1, 3, 3);

	cout << "\nArray1 3*3 Matrix\n";
	PrintArray(arr1, 3, 3);

	FillArrayWithRandomNumbers(arr2, 3, 3);
	cout << "\nArray2 3*3 Matrix\n";
	PrintArray(arr2, 3, 3);

	cout << "\nMultiply 2 Matrix\n";
	MultiplyMatrixes(arrResult, arr1, arr2, 3, 3);
	PrintArray(arrResult, 3, 3);
}