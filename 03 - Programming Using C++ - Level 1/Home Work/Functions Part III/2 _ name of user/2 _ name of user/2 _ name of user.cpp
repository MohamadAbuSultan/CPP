
#include <iostream>
#include <string>
using namespace std;
void MyName() {
    string FullName;
    getline(cin, FullName);
    cout << FullName << endl;
}

int main()
{
    MyName();
}
