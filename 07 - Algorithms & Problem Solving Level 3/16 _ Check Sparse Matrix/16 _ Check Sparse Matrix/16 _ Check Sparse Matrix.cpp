#include <iostream>
#include <iomanip>  

using namespace std;

int GenerateRandomNumber(int From, int To) {
    return rand() % (To - From + 1) + From;
}

void FillArrayWithRandomNumbers(int arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++)
		for (short j = 0; j < Cols; j++)
			arr[i][j] = GenerateRandomNumber(0, 1);
}

void PrintMatrix(int arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++)
			cout << setw(2) << setfill('0') << arr[i][j] << " ";
		cout << endl;
	}
}

//bool CheckSparseMatrix(int arr[3][3], short Rows, short Cols) {
//	int count = 0;
//	int totalElements = (Rows * Cols) / 2;
//	for (short i = 0; i < Rows; i++)
//		for (short j = 0; j < Cols; j++)
//			if (arr[i][j] == 0)
//				count++;
//	return count > totalElements;
//}

int CountNumberInMatrix(int arr[3][3], int Number, short Rows, short Cols) {
	int count = 0;

	for (short i = 0; i < Rows; i++)
		for (short j = 0; j < Cols; j++)
			if (arr[i][j] == Number)
				count++;

	return count;
}

bool CheckSparseMatrix(int arr[3][3], short Rows, short Cols) {
	int totalElements = (Rows * Cols) / 2;
	return CountNumberInMatrix(arr, 0, Rows, Cols) > totalElements;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3];
	FillArrayWithRandomNumbers(arr, 3, 3);

	PrintMatrix(arr, 3, 3);

	if(CheckSparseMatrix(arr, 3, 3))
		cout << "Yes, it's sparse matrix";
	else
		cout << "No, it isn't sparse matrix";
}