
#include <iostream>
#include <cmath>
using namespace std;

float ReadRadius() {
    float R;
    cout << "Enter Radius : " << endl;
    cin >> R;
    return R;
}

float CalculateCircleArea(float R) {
    const float PI = 3.14159265;
    float Area = PI * pow(R, 2);
    return Area;
}

void PrintResult(float Area) {
    cout << Area << endl;
}

int main()
{
    PrintResult(CalculateCircleArea(ReadRadius()));
}
