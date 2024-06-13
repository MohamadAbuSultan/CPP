#include <iostream>
#include <iomanip>

using namespace std;

int GenerateRandomNumbers(int from, int to) {
	return rand() % (to - from + 1) + from;
}

void Fill2DArrayWithRandomNumbers(int arr[3][3], int rows, int columns) {
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < columns; j++)
			arr[i][j] = GenerateRandomNumbers(1, 100);
}

void Print2DArrayResult(int arr[3][3], int rows, int columns) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++)
			cout << setw(3) << arr[i][j] << " ";
		cout << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3];
	Fill2DArrayWithRandomNumbers(arr, 3, 3);

	Print2DArrayResult(arr, 3, 3);

	system("pause>0");

	return 0;
}