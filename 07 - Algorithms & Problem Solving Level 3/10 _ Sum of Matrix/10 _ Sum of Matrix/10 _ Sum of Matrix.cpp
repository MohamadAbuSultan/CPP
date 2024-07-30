#include <iostream>
#include <iomanip> 

using namespace std;

int GenerateRandomNumber(int From, int To) {
	return rand() % (To - From + 1) + From;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols) {
	for (int i = 0; i < Rows; i++)
		for (int j = 0; j < Cols; j++)
			arr[i][j] = GenerateRandomNumber(1, 10);
}

void PrintRandomMatrix(int arr[3][3], short Rows, short Cols) {
	for (int i = 0; i < Rows; i++) {
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

int main()
{
	srand((unsigned)time(NULL));
	
	int arr[3][3];

	FillMatrixWithRandomNumbers(arr, 3, 3);

	PrintRandomMatrix(arr, 3, 3);

	cout << "\nSum of Matrix: " << SumOfMatrix(arr, 3, 3) << endl;
}