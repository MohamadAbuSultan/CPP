
#include <iostream>
#include<string>
#include <iomanip>

using namespace std;

int RandomNumbers(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Columns)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Columns; j++) 
			arr[i][j] = RandomNumbers(1,100);
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Columns)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Columns; j++)
			cout << setw(3) << arr[i][j];
		cout << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3];
	FillMatrixWithRandomNumbers(arr, 3, 3);

	PrintMatrix(arr, 3, 3);

	system("pause>0"); // لازم تضغط enter ليخلص 
	// بدون ضغطة الانتر بخلصش البرنامج

}
