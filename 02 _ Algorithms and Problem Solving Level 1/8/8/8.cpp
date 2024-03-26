/// my code
//#include <iostream>
//using namespace std;
//
//enum enMarks { Fail = 0, Pass = 1 };
//
//int ReadMark() {
//	int mark;
//
//	cout << "enter your mark ? (0-100) : " << endl;
//	cin >> mark;
//
//	return mark;
//}
//
//enMarks CheckMarks(int mark) {
//	if (mark >= 50)
//		return enMarks::Pass;
//	else
//		return enMarks::Fail;
//}
//
//void PrintMarks(enMarks Marks) {
//	if (Marks == enMarks::Pass)
//		cout << "Pass" << endl;
//	else
//		cout << "Fail" << endl;
//}
//
//int main()
//{
//	PrintMarks(CheckMarks(ReadMark()));
//}



/// code dr/mohammed abu-Hadhoud.
#include <iostream>
using namespace std;

enum enMarks { Fail = 0, Pass = 1 };

int ReadMark() {
	int mark;

	cout << "enter your mark ? (0-100) : " << endl;
	cin >> mark;

	return mark;
}

enMarks CheckMarks(int mark) {
	if (mark >= 50)
		return enMarks::Pass;
	else
		return enMarks::Fail;
}

void PrintMarks(int mark) {
	if (CheckMarks(mark) == enMarks::Pass)
		cout << "Pass" << endl;
	else
		cout << "Fail" << endl;
}

int main()
{
	PrintMarks(ReadMark());
}
