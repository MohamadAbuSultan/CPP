#include <iostream>
#include <string>
using namespace std;

string TrimLeft(string input) {
    for (int i = 0; i < input.length(); i++)
        if (input[i] != ' ')
            return input.substr(i, input.length() - i);
            //return input.substr(i);
    return "";
}

string TrimRight(string input) {
    for (int i = input.length() - 1; i >= 0; i--)
        if (input[i] != ' ')
            return input.substr(0, i + 1);
    return "";
}

string Trim(string input) {
    return TrimLeft(TrimRight(input));
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    cout << "Trim Left: \"" << TrimLeft(input) << "\"" << endl;
    cout << "Trim Right: \"" << TrimRight(input) << "\"" << endl;
    cout << "Trim Both: \"" << Trim(input) << "\"" << endl;

    return 0;
}
