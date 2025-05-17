#include <iostream>
#include <vector>
using namespace std;

vector<string> Join(vector<string> Input, string Delimiter) {
    vector<string> result;

    for (int i = 0; i < Input.size(); i++) {
        result.push_back(Input[i]);
        if(i != Input.size() - 1)
            result.push_back(Delimiter);
    }
    return result;
}

string JoinString(vector<string> Input, string Delimiter) {
    string result = "";

    for (string s : Input)
        result += (s + Delimiter);

    if (!result.empty())
        return result.substr(0, result.length() - Delimiter.length());
    return "Empty String";
}

int main() {
    vector<string> words = { "Hello", "World", "C++", "Programming" };
    string delimiter = ", ";

    vector<string> joinedWords = Join(words, delimiter);

    /*cout << "Joined words: ";
    for (const string& word : joinedWords) 
        cout << word;
    */
    
    string JoinString2 = JoinString(words, ", ");
    cout << JoinString2;
    cout << endl;

    return 0;
}
