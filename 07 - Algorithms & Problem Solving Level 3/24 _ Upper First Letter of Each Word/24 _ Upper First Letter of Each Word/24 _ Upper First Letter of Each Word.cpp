#include <iostream>
#include <string>

using namespace std;

string ReadWord() {
	string Word;
	cout << "Enter a word: ";
	getline(cin, Word);
	return Word;
}

string UpperFirstLetterOfEachWord(string Word) {
	bool isFirstLetter = true;
	for (int i = 0; i < Word.length(); i++)
	{
		if (Word[i] != ' ' && isFirstLetter)
			Word[i] = toupper(Word[i]);
		isFirstLetter = (Word[i] == ' ' ? true : false);
	}
	return Word;
}

//void PrintUpperFirstLetter(string Word) {
//	bool isFirstLetter = true;
//	for (int i = 0; i < Word.length(); i++)
//	{
//		if (Word[i] != ' ' && isFirstLetter)
//			cout  << char(toupper(Word[i]));
//		else if (i != Word.length())
//			cout << Word[i];
//		isFirstLetter = (Word[i] == ' ' ? true : false);
//	}
//}

int main()
{
	// PrintUpperFirstLetter(ReadWord());
	string upperLetter = UpperFirstLetterOfEachWord(ReadWord());
	cout << upperLetter << endl;
}