

#include <iostream>

using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Enter a number : ";
    cin >> Number;
    return Number;
}

void AddArrayElement(int arr[100], int& arrLength, int Number)
{
    arrLength++;    
    arr[arrLength - 1] = Number;
}

void InputUserNumbersInArray(int arr[100], int& arrLength)
{
    bool AddMore = true;

    do
    {
        AddArrayElement(arr, arrLength, ReadNumber());

        cout << "Do you want to add more elements ?? [0]=No [1]=Yes : ";
        cin >> AddMore;
    } while (AddMore);
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

int main()
{
    int arr[100], arrLength = 0;

    InputUserNumbersInArray(arr, arrLength);  
    cout << "\nArray Length: " << arrLength << endl; 

    cout << "Array elements: ";
    PrintArray(arr, arrLength);
    
    return 0;
}
