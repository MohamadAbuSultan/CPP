
#include <iostream>

using namespace std;

float ReadNumber()
{
    float Number;
    cout << "Enter A Number : ";
    cin >> Number;
    return Number;
}

int MyFloor(float Number)
{
    if (Number > 0)
        return int(Number);
    else
        return int(Number) - 1;
}

int main()
{
    float Number = ReadNumber();
    cout << "\nMy floor Result : " << MyFloor(Number) << endl;
    cout << "C++ floor Result : " << floor(Number) << endl;
}
