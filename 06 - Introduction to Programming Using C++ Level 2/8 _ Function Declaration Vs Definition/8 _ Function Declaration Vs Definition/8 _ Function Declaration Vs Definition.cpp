
#include <iostream>
using namespace std;

// function declaration
void add(int, int);

// Function Declaration Vs Definition

int main()
{
    cout << "\n\nFunction Declaration Vs Definition: \n\n";

    add(10, 20);
}

// function definition
void add(int a, int b)
{
    cout << a + b << endl;
}
