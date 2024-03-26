
#include <iostream>
using namespace std;

float RectangleArea(float a, float b) {
    return a * b;
}

int main()
{
    int a, b;
    cout << "Enter A , B" << endl;
    cin >> a >> b;
    cout << RectangleArea(a,b) << endl;
}
