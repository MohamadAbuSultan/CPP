#include <iostream>
#include <string>

using namespace std;

string ReadText(){
	string Text;
	cout << "Enter Your Name : ";
	getline(cin, Text);
	return Text;
}

// My_Solution 
// void Encrypt_Decrypt_Text(string Name) {
//	string name = Name, result;
//	for (int i = 0; i < Name.length(); i++)
//	{
//		result += (char(i) + Name[i] + 1);
//	}
//	cout << "Name After Encrypted : " << result << endl;
//	cout << "Name After Decrypted : " << name << endl;
//}

string EncryptText(string Text, short EncryptionKey) {
	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i] + EncryptionKey);
	}
	return Text;
}

string DecryptText(string Text, short EncryptionKey) {
	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i] - EncryptionKey);
	}
	return Text;
}

int main()
{
	//Encrypt_Decrypt_Text(ReadText());
	string Text = ReadText();
	const short EncryptionKey = 2;

	string TextAfterEncryption = EncryptText(Text, EncryptionKey);
	string TextAfterDecryption = DecryptText(TextAfterEncryption, EncryptionKey);

	cout << "Text Before Encryption is : " << Text;
	cout << "\nText After Encryption is : " << TextAfterEncryption;
	cout << "\nText After Decryption is : " << TextAfterDecryption;

}