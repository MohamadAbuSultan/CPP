#include <iostream>

using namespace std;

void FillArrayWithRandomNumbers(int arr[3][3], short Rows, short Cols) {
	int Counter = 0;
	for (int i = 0; i < Rows; i++)
		for (int j = 0; j < Cols; j++)
		{
			Counter++;
			arr[i][j] = Counter;
		}
}

void PrintArrays(int arr[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3];
	FillArrayWithRandomNumbers(arr, 3, 3);

	PrintArrays(arr, 3, 3);
}