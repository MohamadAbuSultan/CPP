#include <iostream>
#include <vector>
using namespace std;

string Join(const vector<string>& Input, const string& Delimiter) {
    if (Input.empty()) return "Empty String"; 

    string result = "";
    for (const auto& s : Input) 
        result += (s + Delimiter);

    return result.substr(0, result.length() - Delimiter.length());
}

string Join(const string words[], int length, const string& Delimiter) { 
    if (length == 0) return "Empty String";

    string result = "";
    for (int i = 0; i < length; i++)
        result += (words[i] + Delimiter);

    return result.substr(0, result.length() - Delimiter.length());
}

int main() {
    vector<string> words = { "Hello", "World", "C++", "Programming" };
    string delimiter = ", ";

    cout << "Vector: ";
    cout << Join(words, delimiter);
    cout << endl;

    string words2[] = { "Hello", "World", "C++", "Programming" };
    cout << "Array:  ";
    cout << Join(words2, 4, delimiter);
    cout << endl;

    return 0;
}
