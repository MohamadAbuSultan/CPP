
#include <iostream>
using namespace std;

int main()
{
	/* 
	ternary operator (Short Hand IF) 
	   => condition ? expression1 : expression2; 
						True	  :	False
	*/

	int Mark = 90;
	string result;
	result = (Mark >= 95) ? "A" : "B";
	cout << result << endl;

	(Mark >= 50) ? cout << "Pass" : cout << "Fail";
	cout << endl;

	(Mark >= 50) ? cout << "Pass" : (Mark >= 200) ? cout << "Pass" : cout << "Fail";;

	cout << endl << endl;
	// HOMEWORK 
	int Number = 0;
	cin >> Number;
	(Number > 0) ? cout << "Positive" : cout << "Negative";
	cout << endl << endl;
	(Number == 0) ? cout << "Number is zero" : ((Number > 0) ? cout << "Positive" : cout << "Negative");
	cout << endl << endl;
}