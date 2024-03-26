
#include <iostream>

using namespace std;

enum enCharType
{
    SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4
};

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

char GetRandomCharacter(enCharType CharType)
{
    switch (CharType)
    {
    case SmallLetter:
        return char(RandomNumber(97, 122));
        break;
    case CapitalLetter:
        return char(RandomNumber(65, 90));
        break;
    case SpecialCharacter:
        return char(RandomNumber(33, 47));
        break;
    case Digit:
        return char(RandomNumber(48, 57));
        break;
    default:
        break;
    }
}

void PrintStringArray(string arr[100], int arrLength)
{
    cout << "\nArray elements:\n\n";
    for (int i = 0; i < arrLength; i++)
    {
        cout << "Array[" << i << "] : ";
        cout << arr[i] << "\n";
    }
    cout << "\n";
}

string GenerateWord(enCharType CharType, short Length)
{
    string word;
    for (int i = 1; i <= Length; i++)
    {
        word = word + GetRandomCharacter(CharType);
    }
    return word;
}

string GenerateKey()
{
    string Key = "";

    Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key += GenerateWord(enCharType::CapitalLetter, 4);

    return Key;
}

void FillArrayWithKeys(string arr[100], int arrLength)
{ 
    for (int i = 0; i < arrLength; i++)
        arr[i] = GenerateKey(); 
}

int main()
{
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL)); 
    
    string arr[100]; 
    int arrLength = 0; 

    arrLength = ReadPositiveNumber("How many keys do you want to generate?\n");    
    
    FillArrayWithKeys(arr, arrLength);

    PrintStringArray(arr, arrLength);
    
    return 0;

}
