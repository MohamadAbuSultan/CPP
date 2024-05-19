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

string GenerateWord() {
	string Word;
	for (int i = 0; i < 4; i++)
	{
		Word += char(RandomNumber(65, 90));
	}
	return Word;
}

string GenerateKeys() {
	string Keys;
	for (int i = 0; i < 4; i++)
	{
		if (i == 3) { Keys += GenerateWord(); break; }
		Keys += GenerateWord() + "-";
	}
	return Keys;
}

void PrintGenerateKeys(int Number) {
	for (int i = 1; i <= Number; i++)
	{
		cout << "Key [" << i << "]: " << GenerateKeys() << endl;
	}
}

int main()
{
	srand(time(NULL));
	PrintGenerateKeys(ReadPositiveNumber("Read A positive Integer"));
}
