#include <iostream>
#include <string>

using namespace std;

string ReadWord() {
	string Word;

	cout << "Enter A Word: ";
	getline(cin, Word);

	return Word;
}

char ReadLetter() {
	char Letter;

	cout << "Enter A Letter To Count it: ";
	cin >> Letter;

	return Letter;
}

char InvertLetter(char letter) {
	return isupper(letter) ? tolower(letter) : toupper(letter);
}

short CountLetter(string inputWord, char inputLetter, bool matchCase = true) {
	short counter = 0;

	for (short i = 0; i < inputWord.length(); i++)
		if (matchCase) {
			if (inputWord[i] == inputLetter)
				counter++;
		}
		else
			if (tolower(inputWord[i]) == tolower(inputLetter))
				counter++;

	return counter;
}

int main()
{
	string word = ReadWord();
	char letter = ReadLetter();

	cout << "\nLetter " << letter << " Count: " << CountLetter(word, letter);

	cout << "\nLetter " << letter;
	cout << " + " << InvertLetter(letter);
	cout << " Count: " << CountLetter(word, letter, false);

	/*
	cout << "\n\n";

	short counter = 0;
	readLetter = isupper(readLetter) ? tolower(readLetter) : toupper(readLetter);
	for (short i = 0; i < readWord.length(); i++)
		if (readLetter == readWord[i])
			counter++;
	cout << counter + countLetter;
	*/
}