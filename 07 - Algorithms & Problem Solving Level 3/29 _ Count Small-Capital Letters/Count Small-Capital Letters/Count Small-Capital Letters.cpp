#include <iostream>
#include <string>

using namespace std;

string InputWord() {
	string Word;

	cout << "Enter A Word: ";
	getline(cin, Word);

	return Word;
}

//bool IsUpperCharacterCase(char Input) {
//	return isupper(Input) ? true : false;
//}

enum enWhatToCount { SmallLetter = 0, CapitalLetter = 1, All = 2 };

short CountCharacters(string Input, enWhatToCount WhatToCount = enWhatToCount::All) {

	if (WhatToCount == enWhatToCount::All)
		return Input.length();
	
	short Counter = 0;

	for (int i = 0; i < Input.length(); i++)
	{
		if (WhatToCount == enWhatToCount::CapitalLetter && isupper(Input[i]))
			Counter++;

		if (WhatToCount == enWhatToCount::SmallLetter && islower(Input[i]))
			Counter++;
	}
	
	return Counter;

}

int CountCapitalLetters(string Input) {
	int result = 0;

	for (int i = 0; i < Input.length(); i++)
		//if (IsUpperCharacterCase(Input[i]) == true)
		if(isupper(Input[i]))
			result++;

	return result;
}

int CountSmallLetters(string Input) {
	int result = 0;

	for (int i = 0; i < Input.length(); i++)
		/*if (IsUpperCharacterCase(Input[i]) == false && Input[i] != ' ')*/
		if(islower(Input[i]))
			result++;

	return result;
}

int main()
{
	string inputWord = InputWord();

	cout << "\nString Length: " << inputWord.length();
	cout << "\n\nCapital Letters Count: " << CountCapitalLetters(inputWord);
	cout << "\n\nSmall Letters Count: " << CountSmallLetters(inputWord);

	cout << "\n\nString Length: " << inputWord.length();
	cout << "\n\nString Length: " << CountCharacters(inputWord);
	cout << "\n\nCapital Letters Count: " << CountCharacters(inputWord, enWhatToCount::CapitalLetter);
	cout << "\n\nSmall Letters Count: " << CountCharacters(inputWord, enWhatToCount::SmallLetter);

	cout << endl;
}