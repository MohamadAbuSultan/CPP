#include <iostream>

using namespace std;

short GenerateRandomNumber(int from, int to) {
	return rand() % (to - from + 1) + from;
}

void Fill2DArrayWithRandomNumbers(short arr[3][3], short rows, short cols) {
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			arr[i][j] = GenerateRandomNumber(1, 100);
		}
	}
}

void PrintMatrix(short arr[3][3], short rows, short cols) {
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void SumMatrix(short arr[3][3], short rows, short cols) {
	short sum = 0;
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			sum += arr[i][j];
			if (j == 2) {
				printf("Row %d Sum = %d\n",i + 1, sum);
				sum = 0;
			}
		}
	}
}

int main()
{
	srand((unsigned)time(NULL));
	
	short arr[3][3];

	Fill2DArrayWithRandomNumbers(arr, 3, 3);

	PrintMatrix(arr, 3, 3);

	SumMatrix(arr, 3, 3);

	return 0;
}
