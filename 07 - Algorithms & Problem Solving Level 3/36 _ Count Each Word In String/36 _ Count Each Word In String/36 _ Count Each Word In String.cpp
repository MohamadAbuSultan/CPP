#include <iostream>
#include <string>

using namespace std;

string InputLetter() {
	string Letter;
	cout << "Enter A Letter: ";
	getline(cin, Letter);
	return Letter;
}

short CountEachWordInString(string Letter)
{
	string delimeter = " ";

	short position = 0, counter = 0;
	string Word;

	while ((position = Letter.find(delimeter)) != string::npos)
	{
		Word = Letter.substr(0, position);

		if (Word != "")
			counter++;

		Letter.erase(0, position + delimeter.length());
	}

	if (Letter != "")
		counter++;

	return counter;
}

int main()
{
	cout << CountEachWordInString(InputLetter());
}
