
#include <iostream>
using namespace std;

void ReadArrayData(int Arr[100], int& Length) {


	cout << "How many numbers do yo want to enter? 1 to 100 :\n";
	cin >> Length;

	for (int i = 0; i <= Length - 1; i++)
	{
		cout << "Enter the number " << i + 1 << endl;
		cin >> Arr[i];
	}


}

void PrintArrayData(int Arr[100], int Length) {

	for (int i = 0; i <= Length - 1; i++)
	{

		cout << "Number [" << i + 1 << "] : " << Arr[i] << endl;

	}
}

int CalculateArraySum(int Arr[100], int Length) {
	int Sum = 0;

	for (int i = 0; i <= Length-1; i++)
	{
		Sum += Arr[i];
	}

	return Sum;
}

float CalculateArrayAverage(int Arr[100], int Length) {
	return (float)CalculateArraySum(Arr, Length) / Length;
}
int main()
{
	int Arr[100], Length = 0;
	ReadArrayData(Arr, Length);
	PrintArrayData(Arr, Length);
	
	cout << "\n**********************\n";

	cout << CalculateArraySum(Arr, Length) << endl;
	cout << CalculateArrayAverage(Arr, Length) << endl;

}

