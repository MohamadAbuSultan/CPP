#include <iostream>
#include <iomanip>

using namespace std;

int GenerateRandomNumber(int From, int To) {
	return rand() % (To - From + 1) + From;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
		for (short j = 0; j < Cols; j++)
			arr[i][j] = GenerateRandomNumber(1, 10);
}

void PrintMatrix(int arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++)
			cout << setw(2) << setfill('0') << arr[i][j] << " ";
		cout << endl;
	}
}

void PrintMiddleRowMatrix(int arr[3][3], short Rows, short Cols) {
	short middleRow = Rows / 2;
	for (short i = 0; i < Cols; i++) 
		cout << setw(2) << setfill('0') << arr[middleRow][i] << " ";
}

void PrintMiddleColMatrix(int arr[3][3], short Rows, short Cols) {
	short middleCols = Cols / 2;
	for (short i = 0; i < Rows; i++)
		cout << setw(2) << setfill('0') << arr[i][middleCols] << " ";
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3];

	FillMatrixWithRandomNumbers(arr, 3, 3);
	PrintMatrix(arr, 3, 3);

	cout << "\n\nMiddle Rows" << endl;
	PrintMiddleRowMatrix(arr, 3, 3);

	cout << "\n\nMiddle Cols" << endl;
	PrintMiddleColMatrix(arr, 3, 3);

	cout << endl;
}