
#include <iostream>
#include <string>
using namespace std;

int number = 300;

int MyFunction(int number2) {
     return ::number + number2;
}

int main()
{
    cout << MyFunction(500) << endl;
}
