
#include <iostream>
#include <string>
using namespace std;

struct stInfo
{
	string FirstName;
	string LastName;
};

stInfo ReadInfo() {
	stInfo Info;

	cout << "Enter first Name : " << endl;
	cin >> Info.FirstName;

	cout << "Enter last Name : " << endl;
	cin >> Info.LastName;

	return Info;
}

string GetFullName(stInfo Info, bool Reversed) {
	string FullName = "";

	if(Reversed)
		FullName = Info.LastName + " " + Info.FirstName;
	else
		FullName = Info.FirstName + " " + Info.LastName;
	
	return FullName;
}

void PrintFullName(string FullName) {
	cout << "Your Full name : " << FullName << endl;
}

int main()
{
	PrintFullName(GetFullName(ReadInfo(),true));
}