

#include <iostream>
#include <string>
using namespace std;

struct stInfo
{
	int Age;
	bool HasDrivingLicense;
	bool HasRecommendation;
};

stInfo ReadInfo() {
	stInfo Info;

	cout << "Enter your age: " << endl;
	cin >> Info.Age;

	cout << "Do you have DrivingLicense ? " << endl;
	cin >> Info.HasDrivingLicense;

	cout << "Do you have Recommendation ? " << endl;
	cin >> Info.HasRecommendation;

	return Info;
}

bool IsAccepted(stInfo Info) {
	if (Info.HasRecommendation) 
		return true;
	else
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

	return 0;
}
// unit testing تجربة كل الأخطاء