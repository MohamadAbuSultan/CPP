
#include <iostream>
#include <cmath>
using namespace std;

void PowerOf(int number) {
    cout << pow(number, 2) << endl;
    cout << pow(number, 3) << endl;
    cout << pow(number, 4) << endl;
}

int main()
{
    int number;
    cin >> number;
    PowerOf(number);
}

