

#include <iostream>
using namespace std;
void SwapNumbers(int &number1,int &number2) {
    int temp = number2;
    number2 = number1;
    number1 = temp;
    cout << "After swap inside function Number1 : " <<  number1 << ", number2 : " << number2 << endl;
}

int main()
{
    int number1, number2;
    cout << "enter number1 : ";
    cin >> number1;
    cout << "enter number2 : ";
    cin >> number2;

    SwapNumbers(number1, number2);
    cout <<"After swap inside main the function " << "number1 : " << number1 << ", number2 : " << number2 << endl;

    return 0;
}