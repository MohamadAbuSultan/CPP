

#include <iostream>
#include <cmath>
using namespace std;

// function برجع قيمة وحدة
// procedure برجع كذا قيمة

void ReadNumbers(float& A, float& B, float& C) {
    cout << "Enter A : ";
    cin >> A; 
    
    cout << "Enter B : ";
    cin >> B;

    cout << "Enter C : ";
    cin >> C;
}

float CircleAreaByArbitraryTriangle(float A, float B, float C) {
    const float PI = 3.14159;

    float P = (A + B + C) / 2;

    float Area = PI * pow(((A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)))), 2);

    return Area;
}

void PrintResult(float Area) {
    cout << "Area = " << Area << endl;
}

int main()
{
    float A, B, C;
    ReadNumbers(A, B, C);
    PrintResult(CircleAreaByArbitraryTriangle(A, B, C));
}