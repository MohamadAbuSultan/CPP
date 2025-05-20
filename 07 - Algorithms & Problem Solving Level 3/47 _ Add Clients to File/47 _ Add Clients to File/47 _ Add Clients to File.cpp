#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

const string ClientsFileName = "Clients.txt";

struct sClient
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;
};

sClient ReadNewClient()
{
	sClient Client;

	cout << "Enter Account Number? ";
	// Usage of std::ws will extract allthe whitespace character
	getline(cin >> ws, Client.AccountNumber);
	// (ws) removes extra spaces and newlines before reading input. 😊

	cout << "Enter PinCode? ";
	getline(cin, Client.PinCode);

	cout << "Enter Name? ";
	getline(cin, Client.Name);

	cout << "Enter Phone? ";
	getline(cin, Client.Phone);

	cout << "Enter AccountBalance? ";
	cin >> Client.AccountBalance;

	return Client;
}

string ConvertRecordToLine(sClient Client, string Seperator = "#//#")
{
	string stClientRecord = "";

	stClientRecord += Client.AccountNumber + Seperator;
	stClientRecord += Client.PinCode + Seperator;
	stClientRecord += Client.Name + Seperator;
	stClientRecord += Client.Phone + Seperator;
	stClientRecord += to_string(Client.AccountBalance);

	return stClientRecord;
}

void AddDataLineToFile(string FileName, string stDataLine)
{
	fstream MyFile;

	MyFile.open(FileName, ios::out | ios::app);
	// (ios::app) makes sure new data is added to the end of the file instead of overwriting it. 😊
	// (ios::app) adds new data without deleting old data. 😊

	if (MyFile.is_open())
	{
		MyFile << stDataLine << endl;
		MyFile.close();
	}
}

void AddNewClient()
{
	sClient Client;
	Client = ReadNewClient();
	AddDataLineToFile(ClientsFileName,
		ConvertRecordToLine(Client));
}

void AddClients()
{
	char AddMore = 'Y';

	do
	{
		system("cls");
		cout << "Adding New Client:\n\n";

		AddNewClient();

		cout << "\nClient Added Successfully, do you want to add more clients ? Y / N ? "; 
		cin >> AddMore;
	} while (toupper(AddMore) == 'Y');
}

int main()
{
	AddClients();

	system("pause>0");

	return 0;
}