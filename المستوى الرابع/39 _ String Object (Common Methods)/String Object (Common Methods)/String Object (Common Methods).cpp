
#include<iostream>
#include<string>

using namespace std;

int main() {

	string S1 = "My Name is Mohammed Abu-Hadhoud, I Love Programming.";
	
	//Prints the length of the string
	cout << S1.length() << endl;
	
	//Returns the letter at position 3
	cout << S1.at(3) << endl; 
	
	//Adds @ProgrammingAdvices to the end of string
	S1.append(" @ProgrammingAdvices");
	
	cout << S1 << endl; 
	
	//inserts Ali at position 7  
	S1.insert(7, " Ali ");  
	
	cout << S1 << endl; 
	
	//Prints all the next 8 letters from position 16.
	
	cout << S1.substr(16,8) << endl;
	
	//Adds one character to the end of the string 
	S1.push_back('X');     
	
	cout << S1 << endl;
	
	//Removes one character from the end of the string 
	S1.pop_back();     
	
	cout << S1 << endl;
	
	//Finds Ali in the string 
	cout << S1.find("Ali") << endl; 
	
	//Finds ali in the string 
	cout << S1.find("ali") << endl;
	
	if (S1.find("ali") == S1.npos)     {  
		cout << "ali is not found"; 
	} 
	//clears all string letters. 
	S1.clear(); 
	
	cout << S1 << endl;
	
	return 0; } 