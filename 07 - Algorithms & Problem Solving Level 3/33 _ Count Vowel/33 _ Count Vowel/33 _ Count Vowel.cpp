#include <iostream>
#include <string>

using namespace std;

string ReadWord() {
    string Word;

    cout << "Enter A Word: ";
    getline(cin, Word);

    return Word;
}

bool IsVowel(char Letter) {
    return (Letter == 'a' || Letter == 'o' || Letter == 'u' || Letter == 'i' || Letter == 'e');
}

short CountVowelLetters(string Word) {
    short Counter = 0;

    for (short i = 0; i < Word.length(); i++) 
        if (IsVowel(tolower(Word[i])))
            Counter++;

    return Counter;
}

int main()
{
    string Word = ReadWord();

    printf("\nNumber Of Vowel is: %d \n", CountVowelLetters(Word));
}