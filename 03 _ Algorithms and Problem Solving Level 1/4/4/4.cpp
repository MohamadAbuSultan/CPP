

#include <iostream>
#include <string>
using namespace std;

struct stInfo
{
	int Age;
	bool HasDrivingLicense;
};

stInfo ReadInfo() {
	stInfo Info;

	cout << "Enter your age: " << endl;
	cin >> Info.Age;

	cout << "Do you have DrivingLicense ? " << endl;
	cin >> Info.HasDrivingLicense;

	return Info;
}

bool IsAccepted(stInfo Info) {
	return (Info.Age > 21 && Info.HasDrivingLicense);
}

void PrintResult(stInfo Info) {
	if (IsAccepted(Info))
		cout << "Hired";
	else
		cout << "Rejected";
}

int main()
{
	PrintResult(ReadInfo());
}
// unit testing تجربة كل الأخطاء