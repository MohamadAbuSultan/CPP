#include <iostream>
#include <string>

using namespace std;

struct ClientData {
    string accountNumber;
    string pinCode;
    string name;
    string phone;
    double accountBalance;
};

ClientData ReadClientData() {
    ClientData client;

    cout << "Please Enter Client Data:\n";
    cout << "Enter Account Number? ";
    getline(cin, client.accountNumber);

    cout << "Enter PinCode? ";
    getline(cin, client.pinCode);

    cout << "Enter Name? ";
    getline(cin, client.name);

    cout << "Enter Phone? ";
    getline(cin, client.phone);

    cout << "Enter AccountBalance? ";
    cin >> client.accountBalance;

    return client;
}

string FormatClientRecordToLine(const ClientData& client, const string& delimiter = "#//#") {
    return client.accountNumber + delimiter +
        client.pinCode + delimiter +
        client.name + delimiter +
        client.phone + delimiter +
        to_string(client.accountBalance);
}

int main() {
    ClientData client = ReadClientData();
    string delimiter = "#//#";

    cout << "\nClient Record for Saving is:\n";
    cout << FormatClientRecordToLine(client, delimiter) << endl;

    return 0;
}
