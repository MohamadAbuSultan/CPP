
#include <iostream>
using namespace std;
int main()
{
    // #14 swap numbers
    int a, b, temp;
    cin >> a >> b;
    cout << a << " " << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << endl;
    return 0;
}
