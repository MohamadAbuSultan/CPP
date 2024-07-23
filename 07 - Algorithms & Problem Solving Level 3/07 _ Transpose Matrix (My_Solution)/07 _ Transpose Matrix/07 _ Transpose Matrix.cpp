#include <iostream>

using namespace std;

void FillArray(int arr[3][3], short Rows, short Cols) {
	int Counter = 0;

	for (short i = 0; i < Rows; i++)
		for (short j = 0; j < Cols; j++)
		{
			Counter++;
			arr[i][j] = Counter;
			/* 
			   or we can write arr[j][i] = Counter;
			   and write arr[j][i] in The PrintArray Function
			*/
		}
}

void PrintArray(int arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
}

void FillArrayTransposeMatrix(int arr[3][3], short Rows, short Cols) {
	int Counter = 0;
	for (short i = 0; i < Rows; i++)
		for (short j = 0; j < Cols; j++)
		{
			Counter++;
			arr[j][i] = Counter;
		}
}

int main()
{
	int arr[3][3];

	cout << "\nArray ordered matrix\n";
	FillArray(arr, 3, 3);
	PrintArray(arr, 3, 3);

	cout << "\nArray Transpose matrix\n";
	FillArrayTransposeMatrix(arr, 3, 3);
	PrintArray(arr, 3, 3);
}