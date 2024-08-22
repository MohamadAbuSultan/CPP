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

	cout << "Enter A Letter: ";
	cin >> Letter;

	return Letter;
}

short CountCharacters(string readWord, char readLetter) {
	int counter = 0;
	for (int i = 0; i < readWord.length(); i++)
		if (readWord[i] == readLetter)
			counter++;
	return counter;
}

int main()
{
	string readWord = ReadWord();
	char readLetter = ReadLetter();

	//char readLetter;
	//cout << "Enter A Letter To Count it: ";
	//cin >> readLetter;

	printf("Character %c count: %d\n", readLetter,
		CountCharacters(readWord, readLetter));

	return 0;
}