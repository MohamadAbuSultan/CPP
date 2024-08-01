#include <iostream>
#include <iomanip>

using namespace std;

int GenerateRandomNumber(int From, int To) {
	return rand() % (To - From + 1) + From;
}

void FillArrayWithRandomNumbers(int arr[3][3], short Rows, short Cols) {
	for (int i = 0; i < Rows; i++)
		for (int j = 0; j < Cols; j++)
			arr[i][j] = GenerateRandomNumber(1, 10);
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
			cout << setw(2) << setfill('0') << arr[i][j] << " ";
		cout << endl;
	}
}

int SumOfMatrix(int arr[3][3], short Rows, short Cols) {
	int result = 0;
	for (int i = 0; i < Rows; i++)
		for (int j = 0; j < Cols; j++)
			result += arr[i][j];
	return result;
}

bool AreEqualMatrices(int arr[3][3], int arr2[3][3], short Rows, short Cols)
{
	return SumOfMatrix(arr, Rows, Cols) == SumOfMatrix(arr2, Rows, Cols);
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3], arr2[3][3];

	FillArrayWithRandomNumbers(arr, 3, 3);
	cout << "Matrix1:\n";
	PrintMatrix(arr, 3, 3);

	FillArrayWithRandomNumbers(arr2, 3, 3);
	cout << "\n\nMatrix2:\n";
	PrintMatrix(arr2, 3, 3);

	cout << "\n\n";

	/*int sumMatrix1 = SumOfMatrix(arr, 3, 3);
	int sumMatrix2 = SumOfMatrix(arr2, 3, 3);

	if (sumMatrix1 == sumMatrix2) cout << "Equal";
	else cout << "No";*/

	if (AreEqualMatrices(arr, arr2, 3, 3))
		cout << "Yes, Matrices are equal";
	else
		cout << "No, Not Equal";
}