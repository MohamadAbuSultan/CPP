#include <iostream>
#include <string>

using namespace std;

string InputWord() {
	string Word;

	cout << "ENter A Word: ";
	getline(cin, Word);

	return Word;
}

char InvertCharacterCase(char Input) {
	return isupper(Input) ? tolower(Input) : toupper(Input);
}

string InvertAllLettersCase(string Word) 
{
	for (int i = 0; i < Word.length(); i++)
		Word[i] = InvertCharacterCase(Word[i]);

	return Word;
}

int main()
{
	string inputWord = InputWord();

	cout << "\n\nString After Inverting All Letters Case: ";
	cout << InvertAllLettersCase(inputWord);

	cout << endl;
}