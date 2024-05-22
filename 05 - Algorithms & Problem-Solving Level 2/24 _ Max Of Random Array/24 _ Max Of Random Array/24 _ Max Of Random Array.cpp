#include <iostream>

using namespace std;

int RandomNumber(int From, int To) {
    int randNumber = rand() % (To - From + 1) + From;
    return randNumber;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength) {
    cout << "Enter Array size: ";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
}

void PrintArrayNumbers(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
}

int MaxNumberinArray(int arr[100], int arrLength) {
    int maxNumber = 0;
    for (int i = 0; i < arrLength; i++)
    {
        if (maxNumber < arr[i]) maxNumber = arr[i];
    }
    return maxNumber;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength;

    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray Elements: ";
    PrintArrayNumbers(arr, arrLength);

    cout << "\n\nMax Number in the array is: ";
    cout << MaxNumberinArray(arr, arrLength);

    cout << "\n";

    return 0;
}