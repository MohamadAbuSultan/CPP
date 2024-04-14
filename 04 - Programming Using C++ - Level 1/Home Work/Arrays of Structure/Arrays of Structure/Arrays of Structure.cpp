

#include <iostream>
using namespace std;

struct strInfo {
    string FirstName;
    string LastName;
    int age;
    string phone;
};

void ReadInfo(strInfo& Info) {
    cout << "enter FirstName" << endl;
    cin >> Info.FirstName;

    cout << "enter LastName" << endl;
    cin >> Info.LastName;

    cout << "enter age " << endl;
    cin >> Info.age;

    cout << "enter phone" << endl;
    cin >> Info.phone;
}

void PrintInfo(strInfo Info) {
    cout << Info.FirstName << endl;
    cout << Info.LastName << endl;
    cout << Info.age << endl;
    cout << Info.phone << endl;
}

void ReadAllInfo(strInfo Persons[2]) {
    ReadInfo(Persons[0]); 
    ReadInfo(Persons[1]);
}

void PrintAllInfo(strInfo Persons[2]) {
    PrintInfo(Persons[0]);
    PrintInfo(Persons[1]);
}

int main()
{
    strInfo Persons[2];

    ReadAllInfo(Persons);
    PrintAllInfo(Persons);

}