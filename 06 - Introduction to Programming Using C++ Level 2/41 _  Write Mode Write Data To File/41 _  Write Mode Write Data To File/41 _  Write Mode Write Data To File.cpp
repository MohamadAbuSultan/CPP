#include<iostream>
#include<fstream>

using namespace std;

int main() { 

	fstream MyFile;
	
	MyFile.open("MyFile.txt", ios::out); //Write Mode

	if (MyFile.is_open())
	{         
		MyFile << "Hello, this is the first line\n";  
		MyFile << "Hello, this is the second line\n"; 
		MyFile << "Hello, this is the third line\n"; 

		MyFile.close();
	} 
	
	return 0;

} 