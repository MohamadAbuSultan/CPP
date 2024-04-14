
#include <iostream>
#include <cmath>
using namespace std;

float CircleCircumference(int l) {
    const float PI = 3.14;
    float Area = ((pow(l, 2)) / (4 * PI));
    return Area;
}

int main()
{
    int l;
    cin >> l;
    cout << CircleCircumference(l);
}
