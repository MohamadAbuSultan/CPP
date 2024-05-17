#include <iostream>

using namespace std;

int RandomNumber(int From, int To) {
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

enum enCharType {SmallLetter = 1, CapitalLetter = 2, SpecialC = 3, Digit = 4};

char GetRandomCharacter(enCharType CharType) {
	switch (CharType)
	{
	case enCharType::SmallLetter:
	{
		return char(RandomNumber(97, 122));
		break;
	}
	case enCharType::CapitalLetter:
	{
		return char(RandomNumber(65, 90));
		break;
	}
	case enCharType::SpecialC:
	{
		return char(RandomNumber(33, 47));
		break;
	}
	case enCharType::Digit:
	{
		return char(RandomNumber(48, 57));
		break;
	}
	default:
		break;
	}
}
int main()
{
	srand((unsigned)time(NULL));
	cout << GetRandomCharacter(enCharType::SmallLetter) << endl;
	cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;
	cout << GetRandomCharacter(enCharType::SpecialC) << endl;
	cout << GetRandomCharacter(enCharType::Digit) << endl;
}
