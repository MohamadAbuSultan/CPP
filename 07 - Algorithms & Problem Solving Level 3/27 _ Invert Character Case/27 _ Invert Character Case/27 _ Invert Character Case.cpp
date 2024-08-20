#include <iostream>

using namespace std;

char InputCharacter() {
	char c;

	cout << "Enter A Character: ";
	cin >> c;

	return c;
}

char InvertCharacter(char Input) {
	return isupper(Input) ? tolower(Input) : toupper(Input);
}

int main()
{
	char inputCharacter = InputCharacter();

	cout << "\n\nCharacter After Inverted: ";
	cout << InvertCharacter(inputCharacter);

	cout << endl;
}