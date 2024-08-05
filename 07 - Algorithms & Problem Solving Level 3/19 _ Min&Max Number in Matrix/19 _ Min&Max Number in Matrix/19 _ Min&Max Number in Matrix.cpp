#include <iostream>
#include <iomanip>

using namespace std;

int GenerateRandomNumber(int From, int To) {
    return rand() % (To - From + 1) + From;
}

void FillArrayWithRandomNumbers(int arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++)
		for (short j = 0; j < Cols; j++)
			arr[i][j] = GenerateRandomNumber(1, 100);
}

void PrintMatrix(int arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++)
			cout << setw(2) << setfill('0') << arr[i][j] << " ";
		cout << endl;
	}
}

int MinNumberInMatrix(int arr[3][3], short Rows, short Cols) {
	int number = arr[0][0];
	for (short i = 0; i < Rows; i++)
		for (short j = 0; j < Cols; j++)
			if (arr[i][j] < number)
				number = arr[i][j];
	return number;
}

int MaxNumberInMatrix(int arr[3][3], short Rows, short Cols) {
	int number = arr[0][0];
	for (short i = 0; i < Rows; i++)
		for (short j = 0; j < Cols; j++)
			if (arr[i][j] > number)
				number = arr[i][j];
	return number;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3];
	FillArrayWithRandomNumbers(arr, 3, 3);

	PrintMatrix(arr, 3, 3);
	
	cout << "\nMin Number in Matrix: " << MinNumberInMatrix(arr, 3, 3);
	cout << "\nMax Number in Matrix: " << MaxNumberInMatrix(arr, 3, 3);
}