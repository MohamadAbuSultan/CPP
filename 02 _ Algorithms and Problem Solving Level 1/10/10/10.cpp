
#include <iostream>
using namespace std;

void ReadMarks(int& Mark1, int& Mark2, int& Mark3) {
	
	cout << "Enter mark1 : " << endl;
	cin >> Mark1;

	cout << "Enter mark2 : " << endl;
	cin >> Mark2;

	cout << "Enter mark3 : " << endl;
	cin >> Mark3;

}

int SumOf3Marks(int Mark1, int Mark2, int Mark3) {
	return Mark1 + Mark2 + Mark3;
}

float CalculateAverage(int Mark1, int Mark2, int Mark3) {
			  // reusability
	return (float)SumOf3Marks(Mark1, Mark2, Mark3) / 3;
}

void PrintResult(float Total) {
	cout << "Total Of Avr " << Total << endl;
}

int main()
{
	int Mark1, Mark2, Mark3;
	ReadMarks(Mark1, Mark2, Mark3);
	PrintResult(CalculateAverage(Mark1, Mark2, Mark3));
}