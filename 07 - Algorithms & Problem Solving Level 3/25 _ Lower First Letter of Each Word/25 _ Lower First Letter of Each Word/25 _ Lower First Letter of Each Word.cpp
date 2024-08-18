#include <iostream>
#include <string>

using namespace std;
 
string ReadWord() {
	string word;
	cout << "Enter a word: ";
	getline(cin, word);
	return word;
}

string LowerFirstWord(string letter) {
	bool isFirstLetter = true;
	for (short i = 0; i < letter.length(); i++)
	{
		if (letter[i] != ' ' && isFirstLetter)
			letter[i] = tolower(letter[i]);
		isFirstLetter = (letter[i] == ' ' ? true : false);
	}
	return letter;
}

int main()
{
	string Letter = LowerFirstWord(ReadWord());
	cout << Letter;
}