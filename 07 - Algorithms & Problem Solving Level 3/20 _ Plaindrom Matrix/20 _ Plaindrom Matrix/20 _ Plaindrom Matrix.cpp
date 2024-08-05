#include <iostream>
#include <iomanip>

using namespace std;

int GenerateRandomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void FillArrayWithRandomNumbers(int arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++)
		for (short j = 0; j < Cols; j++)
			arr[i][j] = GenerateRandomNumber(0, 1);
}

void PrintMatrix(int arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++){
		for (short j = 0; j < Cols; j++)
			cout << setw(2) << setfill('0') << arr[i][j] << " ";
		cout << endl;
	}
}

bool IsPlaindromMatrix(int arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++)
		for (short j = 0; j < Cols / 2; j++)
			if (arr[i][j] != arr[i][Cols - 1 - j])
				return false;
	return true;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3];
	FillArrayWithRandomNumbers(arr, 3, 3);

	PrintMatrix(arr, 3, 3);
	
	if (IsPlaindromMatrix(arr, 3, 3) == true)
		cout << "\nMatrix is Palindrom\n";
	else 
		cout << "\nMatrix is not Palindrom\n";
}