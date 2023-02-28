

#include <iostream>
using namespace std;

string ReadPassword()
{

	string Password;

	cout << "enter a 3-Letter Password(ALL CAPITAL)?\n";

	cin >> Password;

	return Password;

}

bool GuessPassword(string OriginalPassword)
{

	int Counter = 0;
	string word = "";

	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++)
			{
				Counter++;

				word = word + char(i);
				word = word + char(j);
				word = word + char(k);

				cout << "Trial [" << Counter << "] : " << word << endl;
				if (word == OriginalPassword)
				{
					cout << "Password is " << OriginalPassword << endl;
					cout << "Found after " << Counter << " Trial(s)" << endl;
					return true;
				}
				word = "";
			}
		}
	}
	return false;
}

int main()
{
	cout << GuessPassword(ReadPassword());

	return 0;
}



// MY SOLUTION
// string Password()
//{
//
//	string Guess = "";
//	cin >> Guess;
//
//	string word = "";
//
//	int Counter = 0;
//
//	for (int i = 65; i <= 90; i++)
//	{
//		for (int j = 65; j <= 90; j++)
//		{
//			for (int k = 65; k <= 90; k++)
//			{
//				word = word + char(i);
//				word = word + char(j);
//				word = word + char(k);
//				Counter++;
//				cout << "Trial [" << Counter << "] : " << word << endl;
//
//				if (word == Guess)
//				{
//					cout << "Password is " << word;
//					cout << " Found After " << Counter << " Trial(s)";
//					return "";
//				}
//				
//				word = "";
//			}
//		}
//	}
//
//}
