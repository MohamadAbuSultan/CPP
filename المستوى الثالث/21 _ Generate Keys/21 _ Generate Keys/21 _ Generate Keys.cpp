

#include <iostream>
using namespace std;

int ReadPositiveNumber()
{
    int Number = 0;
	do
	{
		cout << "Enter Positive Number" << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

int RandomNumber(int From, int To)
{

	int randNum = rand() % (To - From + 1) + From;
	return randNum;

}

char GetRandomCharacter()
{
		return char(RandomNumber(65, 90));
}

string GenerateWord(short length)
{

	string Word;
	for (int i = 0; i < length; i++)
	{
		Word = Word + GetRandomCharacter();
	}
	return Word;
}

int main()
{
	srand((unsigned)time(NULL));

	cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;
	
	return 0;

}
