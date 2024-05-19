#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message) {
	int Number;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

int RandomNumber(int From, int To) {
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

enum enCharType {SmallLetter = 1, CapitalLetter = 2, Digit = 3, SpecialC = 4};

char GetRandomCharacter(enCharType CharType) {
	switch (CharType)
	{
	case enCharType::SmallLetter: {
		return char(RandomNumber(97, 122));
		break;
	}
	case enCharType::CapitalLetter: {
		return char(RandomNumber(65, 90));
		break;
	}
	/*case enCharType::Digit: {
		return char(RandomNumber(, ));
		break;
	}
	case enCharType::SpecialC: {
		return char(RandomNumber(, ));
		break;
	}*/
	default:
		break;
	}
}

string GenerateWord(enCharType CharType, short Length) {
	string Word = "";
	for (int i = 0; i < Length; i++)
	{
		Word = Word + GetRandomCharacter(CharType);
	}
	return Word;
}

string GenerateKey() {
	string Key = "";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4);
	return Key;
}

void GenerateKeys(short NumberOfKeys) {
	for (int i = 1; i <= NumberOfKeys; i++)
	{
		cout << "Key [" << i << "]: " << GenerateKey() << endl;
	}
}
int main()
{
	srand((unsigned) time(NULL));
	GenerateKeys(ReadPositiveNumber("Enter Number of Keys"));
}
