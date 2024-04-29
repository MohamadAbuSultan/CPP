

#include <iostream>
#include <cmath>
using namespace std;

void ReadTriangleData(float& A, float& B) {
    cout << "Enter A : ";
    cin >> A;

    cout << "Enter B : ";
    cin >> B;
}

float CircleAreaByIsoscelesTriangle(float A, float B) {
    const float PI = 3.14159;
    float Area = PI * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));
    return Area;
}

void PrintResult(float Area) {
    cout << "Circle Area = " << Area;
}

int main()
{
    float A, B;
    ReadTriangleData(A, B);
    PrintResult(CircleAreaByIsoscelesTriangle(A, B));
}