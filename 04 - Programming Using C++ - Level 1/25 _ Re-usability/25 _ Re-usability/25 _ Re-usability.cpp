
#include <iostream>
#include <string>
using namespace std;

// procedure or function لو بدك تكون مبرمج ناجح لازم يعملوا شغلة وحدة بس

struct strInfo {
	string FirstName;
	string LastName;
	int age;
	string phone;
};

					// by-reference مهمممم
void ReadInfo(strInfo &Info) {

	cout << "Enter your first Name : " << endl;
	cin >> Info.FirstName;

	cout << "Enter your last Name : " << endl;
	cin >> Info.LastName;

	cout << "Enter your age : " << endl;
	cin >> Info.age;

	cout << "Enter your phone number : " << endl;
	cin >> Info.phone;

}

void PrintInfo(strInfo Info) {
	cout << "**************************" << endl;
	
	cout << "Your first name is : " << Info.FirstName << endl;

	cout << "Your last name is : " << Info.LastName << endl;

	cout << "Your age is : " << Info.age << endl;

	cout << "Your phone number is : " << Info.phone << endl;

	cout << "**************************" << endl;

}

int main()
{
	strInfo Person1Info;
	ReadInfo(Person1Info);
	PrintInfo(Person1Info);

	strInfo Person2Info;
	ReadInfo(Person2Info);
	PrintInfo(Person2Info);
}
