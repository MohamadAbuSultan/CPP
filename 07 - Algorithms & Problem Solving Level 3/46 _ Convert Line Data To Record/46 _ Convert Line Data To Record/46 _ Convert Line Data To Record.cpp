#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct ClientData {
    string accountNumber;
    string pinCode;
    string name;
    string phone;
    double accountBalance;
};

vector<string> SplitString(string input, string delimiter) {
    vector<string> result;
    size_t pos = 0;
    string sWord;

    while ((pos = input.find(delimiter)) != string::npos) {
        sWord = input.substr(0, pos);
        result.push_back(sWord);
        input.erase(0, pos + delimiter.length());
    }
    result.push_back(input); 

    return result;
}

ClientData ParseClientDataFromLine(string line, string delimiter) {
    vector<string> fields = SplitString(line, delimiter);
    ClientData client;

    if (fields.size() == 5) { 
        client.accountNumber = fields[0];
        client.pinCode = fields[1];
        client.name = fields[2];
        client.phone = fields[3];
        client.accountBalance = stod(fields[4]);
    }

    return client;
}

void PrintClientData(const ClientData& client) {
    cout << "\nExtracted Client Data:\n";
    cout << "Account Number: " << client.accountNumber << endl;
    cout << "PinCode: " << client.pinCode << endl;
    cout << "Name: " << client.name << endl;
    cout << "Phone: " << client.phone << endl;
    cout << "Account Balance: " << client.accountBalance << endl;
}

int main() {
    string line = "A150#//#1234#//#Mohammed Abu-Hadhoud#//#079939999#//#5000.000000";

    cout << "Line Record: " << line << endl;

    ClientData client = ParseClientDataFromLine(line, "#//#");

    PrintClientData(client);

    return 0;
}
