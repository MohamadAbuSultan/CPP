#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message){
	int Number;
	do{
		cout << Message << endl;
		cin >> Number;
	}while (Number <= 0);
	return Number;
}

int CountDigitFrequency(short NumberToCheck, int Number){
	int Reminder = 0, Result = 0;
	
	while(Number > 0){
		Reminder = Number % 10;
		Number = Number / 10;
		if (NumberToCheck == Reminder) Result++;
	}
	
	return Result;
}

int main(){
	int Number = ReadPositiveNumber("Enter A Positive Integer");
	short Check = ReadPositiveNumber("Enter the digit to check frequency");
	cout << CountDigitFrequency(Check, Number) << endl;
	return 0;
}