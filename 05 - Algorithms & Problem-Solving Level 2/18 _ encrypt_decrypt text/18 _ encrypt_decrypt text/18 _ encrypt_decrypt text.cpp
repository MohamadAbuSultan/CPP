
#include <iostream>
#include <string>
using namespace std;
string ReadText()
{
	string Text;
	cout << "Please enter Text?\n";
	getline(cin, Text);
	return Text;
}
string EncryptText(string Text, short EncryptionKey)
{
	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i] + EncryptionKey);
	}
	return Text;
}
string DecryptText(string Text, short EncryptionKey)
{
	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i] - EncryptionKey);
	}
	return Text;
}


int main()
{
	const short EncryptionKey = 2; //this is the key.
	string TextAfterEncryption, TextAfterDecryption;
	string Text = ReadText();
	TextAfterEncryption = EncryptText(Text, EncryptionKey);
	TextAfterDecryption = DecryptText(TextAfterEncryption,
		EncryptionKey);
	cout << "\nText Before Encryption : ";
	cout << Text << endl;
	cout << "Text After Encryption : ";
	cout << TextAfterEncryption << endl;
	cout << "Text After Decryption : ";
	cout << TextAfterDecryption << endl;
	return 0;
}
//
//		#include <iostream>
//		#include <string>
//		using namespace std;
//		
//		string ReadText()
//		{
//		
//			string Text;
//			cout << "Enter a Text" << endl;
//			getline(cin, Text);
//			return Text;
//		
//		}
//		
//		string encryptText(string Text, short EncryptionKey)
//		{
//		
//			for (int i = 0; i <= Text.length(); i++)
//			{
//				Text[i] = char( (int) Text[i] + EncryptionKey);
//			}
//			return Text;
//		
//		}
//		
//		string decryptText(string Text, short EncryptionKey)
//		{
//		
//			for (int i = 0; i <= Text.length(); i++)
//			{
//				Text[i] = char( (int) Text[i] - EncryptionKey);
//			}
//			return Text;
//		
//		}
//		
//		int main()
//		{
//			short EncryptionKey = 2;
//		
//			string Text = ReadText();
//			string TextAfterEncryption = encryptText(Text, EncryptionKey);
//			string TextAfterDecryption = encryptText(TextAfterEncryption, EncryptionKey);
//		
//			cout << "\nText Before Encryption : " << Text << endl;
//			cout << "\nText After Encryption : " << TextAfterEncryption << endl;
//			cout << "\nText After Decryption : " << TextAfterDecryption << endl;
//		
//		
//		}
