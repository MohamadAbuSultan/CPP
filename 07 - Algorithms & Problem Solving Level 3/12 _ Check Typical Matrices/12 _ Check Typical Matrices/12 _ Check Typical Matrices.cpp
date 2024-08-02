#include <iostream>
#include <iomanip> 

using namespace std;

int GenerateRandomNumber(int From, int To) {
	return rand() % (To - From + 1) + From;
}

void FillArrayWithRandomNumbers(int arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++)
		for (short j = 0; j < Cols; j++)
			arr[i][j] = GenerateRandomNumber(1, 10);
}

void PrintMatrix(int arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
			cout << setw(2) << setfill('0') << arr[i][j] << " ";
		cout << endl;
	}
}

bool CheckTypicalMatrices(int arr[3][3], int arr2[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++)
		for (short j = 0; j < Cols; j++)
			if (arr[i][j] != arr2[i][j])
				return false;
	return true;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3], arr2[3][3];
	
	FillArrayWithRandomNumbers(arr, 3, 3);
	FillArrayWithRandomNumbers(arr2, 3, 3);

	cout << "\nMatrix1\n";
	PrintMatrix(arr, 3, 3);
	cout << "\nMatrix2\n";
	PrintMatrix(arr2, 3, 3);

	if (CheckTypicalMatrices(arr, arr2, 3, 3) == true)
		cout << "\nYes, Typical\n";
	else
		cout << "\nNo\n";
}