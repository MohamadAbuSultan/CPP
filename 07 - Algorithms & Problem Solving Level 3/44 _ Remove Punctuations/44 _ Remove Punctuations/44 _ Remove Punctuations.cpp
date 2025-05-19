#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string ReadString() {
    string input;

    cout << "Please enter your string:\n";
    getline(cin, input);

    return input;
}

string RemovePunctuation(string text) {
    string result = "";

    for (char c : text) 
        if (!ispunct(c)) 
            result += c;

    return result;
}

int main() {
    string text = ReadString();

    cout << "\nOriginal String:\n" << text << endl;
    cout << "\nWithout Punctuation:\n" << RemovePunctuation(text) << endl;

    return 0;
}
