#include <iostream>

using namespace std;

char ReadLetter() {
	char Letter;

	cout << "Enter A Letter: ";
	cin >> Letter;

	return Letter;
}

bool IsVowel(char Letter) {
	Letter = tolower(Letter);

	return ((Letter == 'a') || (Letter == 'o') || (Letter == 'e') || (Letter == 'u') || (Letter == 'i'));
	
	/*string vowel = "aeiou";

	for (short i = 0; i < vowel.length(); i++)
		if (tolower(Letter) == vowel[i])
			return true;

	return false;*/
}

int main()
{
	char letter = ReadLetter();
	if (IsVowel(letter))
		cout << "\nYes Letter \'" << letter << "\' is vowel\n";
	else
		cout << "\nNo Letter \'" << letter << "\' is not vowel\n";
}