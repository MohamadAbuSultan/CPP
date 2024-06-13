#include <iostream>

using namespace std;

int GenerateRandomNumbers(int from, int to) {
	return rand() % (to - from + 1) + from;
}

void Fill2DArrayWithRandomNumbers(int arr[3][3]) {
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			arr[i][j] = GenerateRandomNumbers(1, 100);
}

void Print2DArrayResult(int arr[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3];
	Fill2DArrayWithRandomNumbers(arr);

	Print2DArrayResult(arr);

	return 0;
}