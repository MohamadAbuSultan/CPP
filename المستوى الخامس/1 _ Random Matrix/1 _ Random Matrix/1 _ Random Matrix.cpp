#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;
int RandomNumbers(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumbers(1, 100);
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[i][j] << "   ";
		}
		cout << "\n";
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3];

	FillMatrixWithRandomNumbers(arr, 3, 3);

	cout << "\nRandom Matrix\n\n";
	PrintMatrix(arr, 3, 3);
}
