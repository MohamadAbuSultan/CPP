

#include <iostream>
using namespace std;

struct strInfo {
	string FirstName;
	string LastName;
	int age;
	string phone;
};

int main()
{
	strInfo Persons[2];

	Persons[0].FirstName = "Mohamad";
	Persons[0].LastName = "Khaled";
	Persons[0].age = 20;
	Persons[0].phone = "202023333";

	Persons[1].FirstName = "Mohammed";
	Persons[1].LastName = "Abu-Sultan";
	Persons[1].age = 21;
	Persons[1].phone = "2021";

	cout << Persons[0].FirstName + " " + Persons[0].LastName + " " + Persons[1].LastName << endl;
}

