

#include <iostream>
#include <cmath>
using namespace std;

float ReadDiameter() {
    float D;
    cout << "Enter diameter : " << endl;
    cin >> D;
    return D;
}

float CalculateCircleAreaByDiameter(float D) {
    const float PI = 3.14159;
    float Area = (PI * pow(D, 2)) / 4;
    return Area;
}

void PrintResult(float Area) {
    cout << "Circle Area = " << Area << endl;
}

int main() // ما تختصر بالأسماء
{
    PrintResult(CalculateCircleAreaByDiameter(ReadDiameter()));
}