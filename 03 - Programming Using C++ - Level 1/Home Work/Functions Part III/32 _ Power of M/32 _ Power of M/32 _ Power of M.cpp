
#include <iostream>
#include <cmath>
using namespace std;

void PowerOfM(int Number, int M) {
    cout << pow(Number, M);
}

int main()
{
    int Number, M;
    cin >> Number >> M;
    PowerOfM(Number, M);
}
