
#include <iostream>
using namespace std;
int main()
{
    // Type Modifiers
    // signed 
    // unsigned 
    // short 
    // long

    int v1;
    signed int v2;

    unsigned int v3;

    short int v4;
    short v5;

    unsigned short int v6;
    unsigned short v7;

    signed long int v8;
    signed long v9;
    long v10;

    unsigned long v11;

    long long v12;

    unsigned long long v13;

    long double v14;

    signed char v15;
    char v16;

    unsigned char v17;

    double distance = 56E12; 
    // 56E12 is equal to 56*10*12
    cout << distance << endl;

    cout << sizeof(bool) << endl;
    
    cout << "Char Range " << CHAR_MIN << " => " << CHAR_MAX << endl;
}