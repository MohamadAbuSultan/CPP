#include <iostream>

using namespace std;

string ReadPasswords() {
	string Password;
	cout << "Enter A Capital Letter Password:\n";
	cin >> Password;
	return Password;
}

bool GuessPassword(string OriginalPassword) {
	string Word;
	int Counter = 0;
	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++)
			{
				Counter++;

				Word = Word + char(i);
				Word = Word + char(j);
				Word = Word + char(k);
				
				cout << "Trial [" << Counter << "]: " << Word << endl;
				if (Word == OriginalPassword) {
					cout << "Password is " << Word << " Found After " << Counter << " Trails";
					return true;
				}

				Word = "";
			}
		}
	}
}


int main()
{
	GuessPassword(ReadPasswords());
}
