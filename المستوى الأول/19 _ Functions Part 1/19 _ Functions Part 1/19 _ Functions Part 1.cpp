
#include <iostream>
#include <string>
using namespace std;

// procedure : يعني ما برجع قيمة void
// procedure : function ما برجع قيمة

void myFunction() { 
	cout << "This is procedure" << endl;
}
void myFunction2() {
	cout << "*************************" << endl;
	cout << "This is my second function" << endl;
	cout << "*************************" << endl;
}
int main()
{
	// parameters 
	
	myFunction();

	myFunction2();

	return 0;
}
