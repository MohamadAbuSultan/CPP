#include <iostream>
#include <vector>
#include <string>
#include <algorithm> 

using namespace std;

string ReadString(string Message) {
    string word;
    cout << Message << " ";
    getline(cin, word);
    return word;
}

vector<string> SplitString(string S1, string delimeter) {
    vector<string> result;

    string sWord;
    size_t pos = 0;

    while ((pos = S1.find(delimeter)) != string::npos) {
        sWord = S1.substr(0, pos);

        if (sWord != "")
            result.push_back(sWord);

        S1.erase(0, pos + delimeter.length());
    }

    if (S1 != "")
        result.push_back(S1);

    return result;
}

string JoinString(vector<string> vString, string Delim)
{
    string result;

    for (string& s : vString)
        result = result + s + Delim;
 
    return result.substr(0, result.length() - Delim.length());
}

string LowerAllString(string result)
{
    for (short i = 0; i < result.length(); i++)
        result[i] = tolower(result[i]);

    return result;
}

string ReplaceWordsInStringWithMatchCase(string input, string toReplace, string replaceWith, bool MatchCase = true) {
    vector<string> result = SplitString(input, " ");

    for (string& s : result) {
        if (MatchCase) {
            if (s == toReplace)
                s = replaceWith;
        }
        else {
            if (LowerAllString(s) == LowerAllString(toReplace))
                s = replaceWith;
        }
    }
    return JoinString(result, " ");
}

int main() {
    string input = ReadString("Enter A Text: ");
    vector<string> words = SplitString(input, " ");

    string toReplace = ReadString("\nEnter The Word To Replace: ");
    string replaceWith = ReadString("Enter The Word To Replace With: ");

    cout << "\nString After Replacing Words: " << ReplaceWordsInStringWithMatchCase(input, toReplace, replaceWith) << endl;
    cout << "\nReplace without match case: " << ReplaceWordsInStringWithMatchCase(input, toReplace, replaceWith, false) << endl;

    return 0;
}
