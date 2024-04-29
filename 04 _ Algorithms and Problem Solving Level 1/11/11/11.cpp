
#include <iostream>
using namespace std;

enum enPassFail{ Fail = 0, Pass = 1 };

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

enPassFail CheckAverage(float Average) {
	if (Average >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void PrintResult(float Average) {
	cout << "Your Avr " << Average << endl;

	if (CheckAverage(Average) == enPassFail::Pass)
		cout << "Pass" << endl;
	else
		cout << "Fail";
}

int main()
{
	int Mark1, Mark2, Mark3;
	ReadMarks(Mark1, Mark2, Mark3);
	PrintResult(CalculateAverage(Mark1, Mark2, Mark3));
}