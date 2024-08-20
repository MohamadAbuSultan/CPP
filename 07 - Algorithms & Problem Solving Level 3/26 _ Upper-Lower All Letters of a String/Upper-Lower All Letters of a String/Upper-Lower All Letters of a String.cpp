#include <iostream>
#include <string>

using namespace std;

string ReadWord() {
    string Word;

    cout << "Enter A Word: ";
    getline(cin, Word);

    return Word;
}

string UpperAllLettersOfString(string Word) {    
    for (int i = 0; i < Word.length(); i++)
        //if (Word[i] != ' ')
        Word[i] = toupper(Word[i]);
  
    return Word;
}

string LowerAllLettersOfString(string Word) {
    for (int i = 0; i < Word.length(); i++)
        //if (Word[i] != ' ')
        Word[i] = tolower(Word[i]);

    return Word;
}


int main()
{
    string readWord = ReadWord();
    cout << "\nWord Before Editing: " << readWord;

    cout << "\n\nWord After Editing Upper All Letters: ";
    cout << UpperAllLettersOfString(readWord);

    cout << "\n\nWord After Editing Lower All Letters: ";
    cout << LowerAllLettersOfString(readWord);

    cout << endl << endl;

    return 0;
}