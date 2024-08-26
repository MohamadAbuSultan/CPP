#include <iostream>
#include <string>

using namespace std;

string ReadStatement() {
	string Statement;

	cout << "Enter A Statement: ";
	getline(cin, Statement);

	return Statement;
}

//void PrintEachWordInStatement(string Input) {
//	for (short i = 0; i < Input.length(); i++)
//	{
//		/*if (Input[i] == ' ') {
//			cout << endl;
//			continue;
//		}
//		cout << Input[i];*/
//	}
//}

void PrintEachWordInStatement(string Input) {
	string delimiter = " ";
	
	cout << "\nYour Statement Words Are:\n\n";
	short position = 0;
	string sWord;

	while ((position = Input.find(delimiter)) != string::npos)
	{
		sWord = Input.substr(0, position);
		if (sWord != "")
			cout << sWord << endl;

		Input.erase(0, position + delimiter.length());
	}

	//if (Input != "")
		cout << Input << endl;
}

int main()
{
	string userStatement = ReadStatement();

	PrintEachWordInStatement(userStatement);

	return 0;
}