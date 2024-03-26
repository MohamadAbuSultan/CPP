
#include <iostream>
#include <cmath>
using namespace std;

float RectangleDiagonalArea(int A, int D) {
    return A * sqrt(pow(D, 2) - pow(A, 2));
}

int main()
{
    int A, D;
    cin >> A >> D;
    cout << RectangleDiagonalArea(A, D);

}
