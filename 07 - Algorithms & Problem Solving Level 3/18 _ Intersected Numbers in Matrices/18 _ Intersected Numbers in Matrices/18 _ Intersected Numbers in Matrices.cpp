#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int GenerateRandomNumber(int From, int To) {
	return rand() % (To - From + 1) + From;
}

void FillArrayWithRandomNumbers(int arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++)
		for (short j = 0; j < Cols; j++)
			arr[i][j] = GenerateRandomNumber(1, 20);
}

void PrintMatrix(int arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++)
			cout << setw(2) << setfill('0') << arr[i][j] << " ";
		cout << endl;
	}
}

bool CheckNumberInMatrix(int arr[3][3], int Number, short Rows, short Cols) {
	for (short i = 0; i < Rows; i++)
		for (short j = 0; j < Cols; j++)
			if (arr[i][j] == Number)
				return true;
	return false;
}

void IntersectedMatrixNumber(int arr[3][3], int arr2[3][3], short Rows, short Cols) {
	int Number = 0;

	for (short i = 0; i < Rows; i++)
		for (short j = 0; j < Cols; j++) {
			Number = arr[i][j];

			if (CheckNumberInMatrix(arr2, Number, Rows, Cols))
				cout << setw(2) << setfill('0') << Number << "\t";
		}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3], arr2[3][3];

	FillArrayWithRandomNumbers(arr, 3, 3);
	PrintMatrix(arr, 3, 3);

	FillArrayWithRandomNumbers(arr2, 3, 3);
	PrintMatrix(arr2, 3, 3);
	
	IntersectedMatrixNumber(arr,arr2, 3, 3);
}