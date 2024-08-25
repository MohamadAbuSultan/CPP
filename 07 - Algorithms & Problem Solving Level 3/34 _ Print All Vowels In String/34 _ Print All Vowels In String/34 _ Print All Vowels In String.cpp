#include <iostream>
#include <string>

using namespace std;

string ReadWord() {
	string Word;

	cout << "Enter A Word: ";
	getline(cin, Word);

	return Word;
}

bool IsVowel(char Input) {
	return (Input == 'a' || Input == 'o' || Input == 'u' || Input == 'e' || Input == 'i');
}

void PrintVowelLetters(string Input) {
	for (short i = 0; i < Input.length(); i++)
		if (IsVowel(tolower(Input[i])))
			cout << Input[i] << " ";
}

int main()
{
	string word = ReadWord();


	cout << "Vowels in word are: ";
	PrintVowelLetters(word);
}