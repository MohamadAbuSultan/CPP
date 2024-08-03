#include <iostream>
#include <iomanip>

using namespace std;

void PrintMatrix(int arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
			cout << setw(2) << setfill('0') << arr[i][j] << " ";
		cout << endl;
	}
}

bool CheckScalarMatrix(int arr[3][3], short Rows, short Cols)
{
	int FirstDiagElement = arr[0][0];

	for (short i = 0; i < Rows; i++)
		for (short j = 0; j < Cols; j++)
		{
			if (i == j && arr[i][j] != FirstDiagElement)
				return false;
			if (i != j && arr[i][j] != 0)
				return false;
			/*if (i == j && arr[i][j] != arr[Rows - 1][Cols - 1])
				return false;
			if (i != j && arr[i][j] != 0)
				return false;*/
		}
	return true;
}

int main()
{
	int arr[3][3] = { {9,0,0},{0,9,0},{0,0,9} };
	PrintMatrix(arr, 3, 3);

	if (CheckScalarMatrix(arr, 3, 3) == true)
		cout << "Yes, Matrix is Scalar";
	else
		cout << "No, Matrix isn't Scalar";
}