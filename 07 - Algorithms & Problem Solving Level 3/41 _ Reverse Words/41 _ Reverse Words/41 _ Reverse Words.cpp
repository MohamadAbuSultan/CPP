#include <iostream>
#include <vector>
#include <string>
using namespace std;

string ReadString() {
	string word;
	cout << "Enter a Word: ";
	getline(cin, word);
	return word;
}

vector<string> SplitString(string S1, string delimeter) {
	vector<string> result;

	string sWord;
	short pos = 0;

	while ((pos = S1.find(delimeter)) != string::npos)
	{
		sWord = S1.substr(0, pos);

		if (sWord != "")
			result.push_back(sWord);

		S1.erase(0, pos + delimeter.length());
	}

	if (S1 != "")
		result.push_back(S1);

	return result;
}

void PrintWords(const vector<string>& words)
{
	cout << "Original order:\n";
	for (const string& word : words)
		cout << word << " ";

	cout << endl;
}

void PrintReversedWords(const vector<string>& words)
{
	cout << "\n\nReversed order:\n";
	for (int i = words.size() - 1; i >= 0; i--)
		cout << words[i] << " ";
}

string ReverseWordsInString(string S1) {
	vector<string> vString;
	string S2 = "";

	vString = SplitString(S1, " ");

	vector<string>::iterator iter = vString.end();

	while (iter != vString.begin()) {
		iter--;

		S2 += *iter + " ";
	}

	S2 = S2.substr(0, S2.length() - 1);

	return S2;
}

int main()
{
	string input = ReadString();
	vector<string> words = SplitString(input, " ");

	/*PrintWords(words);
	PrintReversedWords(words);*/


	cout << "String After Reversing Words: ";
	cout << ReverseWordsInString(input);

	cout << endl << endl;
	return 0;
}
