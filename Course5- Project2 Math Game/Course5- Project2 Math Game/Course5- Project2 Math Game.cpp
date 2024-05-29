#include <iostream>

using namespace std;

short ReadPositiveNumber(string message) {
	short number;

	do
	{
		cout << message << " ";
		cin >> number;
	} while (number <= 0);

	return number;
}



int main()
{
	// How Many Qustions do you want to answer?
	// Enter Questions level [1] Easy, [2] Mid, [3] Hard, [4] Mix ? 
	// Enter Operation Type [1] Add, [2] Sub, [3] Multi, [4] Div, [5] Mix?
}