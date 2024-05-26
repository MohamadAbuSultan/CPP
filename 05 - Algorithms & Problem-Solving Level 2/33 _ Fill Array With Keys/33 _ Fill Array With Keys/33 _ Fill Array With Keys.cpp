#include <iostream>

using namespace std;

int ReadPostiveNumber(string Message) {
	int Number;
	do
	{
		cout << Message << " ";
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

int GenerateRandomNumber(int From, int To) {
	return rand() % (To - From + 1) + From;
}

enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, digit = 4 };

char GetRandomCharacter(enCharType charType) {
	switch (charType)
	{
	case SmallLetter: {
		return char(GenerateRandomNumber(90, 122));
		break;
	}
	case CapitalLetter:
	{
		return char(GenerateRandomNumber(65, 90));
		break;
	}
	case enCharType::SpecialCharacter:
	{
		return char(GenerateRandomNumber(33, 47));
		break;
	}
	case enCharType::digit:
	{
		return char(GenerateRandomNumber(48, 57));
		break;
	}
	default:
		break;
	}
}

string GenerateWord(enCharType charType, short Length) {
	string Word = "";
	for (int i = 0; i < Length; i++)
		Word += GetRandomCharacter(charType);
	return Word;
}
 
string GenerateKey() {
	string Word = "";
	Word += GenerateWord(enCharType::CapitalLetter,4) + "-";
	Word += GenerateWord(enCharType::CapitalLetter,4) + "-";
	Word += GenerateWord(enCharType::CapitalLetter,4) + "-";
	Word += GenerateWord(enCharType::CapitalLetter,4);
	return Word;
}

void FillArrayWithKeys(string arr[100], int arrLength) {
	for (int i = 1; i <= arrLength; i++)
		arr[i] = GenerateKey();
}

void PrintArray(string arr[100], int arrLength) {
	cout << "\n\nArray Elements: \n";
	for (int i = 1; i <= arrLength; i++)
	{
		cout << "Array[" << i << "] : ";
		cout << arr[i] << "\n";
	}
}

int main()
{
	srand((unsigned)time(NULL));

	string arr[100];
	int arrLength = ReadPostiveNumber("How many keys do you want to generate ?");

	FillArrayWithKeys(arr, arrLength);

	PrintArray(arr, arrLength);

	return 0;
}