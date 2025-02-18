#include <iostream>
#include <string>
#include <vector>

using namespace std;

string ReadString() {
	string Word;
	cout << "Enter a Word: ";
	getline(cin, Word);
	return Word;
}

vector<string> SplitString(string S1, string delimeter) {
	vector<string> result;
	
	string sWord;
	short pos = 0;

	while ((pos = S1.find(delimeter)) != string::npos)
	{
		sWord = S1.substr(0, pos);

		if (sWord != "")
			result.push_back(sWord);

		S1.erase(0, pos + delimeter.length());
	}

	if (S1 != "")
		result.push_back(S1);

	return result;
}

int main()
{
	vector <string> vString;
	//vString = SplitString(ReadString(), "#,,#");

	string S2 = "Mohamad#,,#Khaled#,,#Naim";
	vString = SplitString(S2, "#,,#");

	cout << "Tokens: " << vString.size() << endl;

	for (string& s : vString)
		cout << s << endl;
}