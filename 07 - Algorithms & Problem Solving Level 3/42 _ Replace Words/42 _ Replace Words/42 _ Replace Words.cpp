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

void PrintWords(const vector<string>& words) {
    cout << "Original order: ";
    for (const string& word : words)
        cout << word << " ";
    cout << endl;
}

void PrintReversedWords(const vector<string>& words) {
    cout << "\nReversed order: ";
    for (int i = words.size() - 1; i >= 0; i--)
        cout << words[i] << " ";
}

string ReverseWordsInString(string S1) {
    vector<string> vString = SplitString(S1, " ");
    reverse(vString.begin(), vString.end());

    string S2 = "";
    for (const string& word : vString)
        S2 += word + " ";

    return S2.substr(0, S2.length() - 1);
}

string ReplaceWordsInString(string input, string toReplace, string replaceWith) {
    size_t pos = input.find(toReplace);

    while (pos != string::npos) {
        input.replace(pos, toReplace.length(), replaceWith);
        pos = input.find(toReplace, pos + replaceWith.length());
    }

    return input;
}

int main() {
    string input = ReadString("Enter A Text: ");
    vector<string> words = SplitString(input, " ");

    PrintWords(words);
    PrintReversedWords(words);

    //cout << ReverseWordsInString(input);

    string toReplace = ReadString("\nEnter The Word To Replace: ");
    string replaceWith = ReadString("Enter The Word To Replace With: ");

    cout << "\nString After Replacing Words: " << ReplaceWordsInString(input, toReplace, replaceWith) << endl;

    return 0;
}
