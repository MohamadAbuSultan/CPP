
#include <iostream>
using namespace std;

void ReadGrades(float Grades[3]) {
	cout << "enter number 1 : " << endl;
	cin >> Grades[0];

	cout << "enter number 2 : " << endl;
	cin >> Grades[1];

	cout << "enter number 3 : " << endl;
	cin >> Grades[2];
}

float CalculateAverageGrades(float Grades[3]) {
	return (Grades[0] + Grades[1] + Grades[2]) / 3;
}

// divide and conquer فرق تسد

int main()
{
	float Grades[3];

	ReadGrades(Grades);
	cout << CalculateAverageGrades(Grades) << endl;
}