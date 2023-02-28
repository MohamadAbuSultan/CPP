
#include <iostream>
#include <string>
using namespace std;
                // by-ref
void ReadNumbers(int& Number1, int& Number2, int& Number3) {
        
    cout << "Enter number1 : " << endl;
    cin >> Number1;

    cout << "Enter number2 : " << endl;
    cin >> Number2;

    cout << "Enter number3 : " << endl;
    cin >> Number3;
}

int CalculateSumOf3Number(int Number1, int Number2, int Number3) {
    return Number1 + Number2 + Number3;
}

void PrintSumOfNumbers(int Total) {
    cout << "Total sum : " << Total << endl;
}

int main()          
{
    int Number1, Number2, Number3;
    ReadNumbers(Number1, Number2, Number3);
    PrintSumOfNumbers(CalculateSumOf3Number(Number1, Number2, Number3));
}