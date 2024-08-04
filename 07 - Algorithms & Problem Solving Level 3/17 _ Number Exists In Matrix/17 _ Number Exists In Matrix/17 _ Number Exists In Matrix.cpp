#include <iostream>
#include <iomanip>

using namespace std;

int ReadPositiveNumber(string Message) {
	int Number = 0;
	do
	{
		cout << Message << " ";
		cin >> Number;
	} while (Number < 0);
	return Number;
}

int GenerateRandomNumber(int From, int To) {
	return rand() % (To - From + 1) + From;
}

void FillArrayWithRandomNumbers(int arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++)
		for (short j = 0; j < Cols; j++)
			arr[i][j] = GenerateRandomNumber(1, 100);
}

void PrintMatrix(int arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++)
			cout << setw(2) << setfill('0') << arr[i][j] << " ";
		cout << endl;
	}
}

bool CheckNumberInMatrix(int arr[3][3], int Number, short Rows, short Cols) {
	for (short i = 0; i < Rows; i++)
		for (short j = 0; j < Cols; j++)
			if (arr[i][j] == Number)
				return true;
	return false;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3];
	FillArrayWithRandomNumbers(arr, 3, 3);

	PrintMatrix(arr, 3, 3);

	int Number = ReadPositiveNumber("Please enter the number to look for in the matrix?");
	
	if (CheckNumberInMatrix(arr, Number, 3, 3) == true)
		cout << "Yes, its there";
	else
		cout << "No, its not exist";
}