#include <iostream>
#include <iomanip>

using namespace std;

//int GenerateRandomNumber(int From, int To) {
//    return rand() % (To - From + 1) + From;
//}
//
//void FillArrayWithRandomNumbers(int arr[3][3], short Rows, short Cols) {
//	for (short i = 0; i < Rows; i++)
//		for (short j = 0; j < Cols; j++)
//			arr[i][j] = GenerateRandomNumber(0, 1);
//}

void PrintMatrix(int arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++)
			cout << setw(2) << setfill('0') << arr[i][j] << " ";
		cout << endl;
	}
}

bool CheckIdentityMatrix(int arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++) 
		for (short j = 0; j < Cols; j++) {
			if (i == j && arr[i][j] != 1)
				return false;
			else if (i != j && arr[i][j] != 0)
				return false;
			/*if (i == j && arr[i][j] == 1)
				continue;
			else if (i != j && arr[i][j] == 0)
				continue;
			else
				return false;*/
		}
	return true;
}

int main()
{
	/*srand((unsigned)time(NULL));

	int arr[3][3];

	FillArrayWithRandomNumbers(arr, 3, 3);

	PrintMatrix(arr, 3, 3);

	if (CheckIdentityMatrix(arr, 3, 3) == true)
		cout << "\nYes, matrix is identity\n";
	else
		cout << "\nNo, matrix isn't identity\n";*/

	//int Matrix1[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
	int Matrix1[3][3] = { {1,0,0 }, {0, 1, 0}, {0, 0, 1} };

	cout << "\nMatrix1:\n\n";

	PrintMatrix(Matrix1, 3, 3);

	if (CheckIdentityMatrix(Matrix1, 3, 3))
		cout << "\nYes, Matrix is identity\n";
	else 
		cout << "\nNo, Matrix is NOT identity\n";
}