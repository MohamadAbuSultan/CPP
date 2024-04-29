
#include <iostream>
#include <string>
using namespace std;

// global variable
int x = 3000;

void MyFunction() {
	
	// x is local variable (function)لأنه داخل نطاق الفنكشن 
	int x = 500;
	// name ، value ، reference(address)
	cout << x << endl;		
}

int main()
{
	// x is local variable  (main) لأنه داخل نطاق دالة المين
	int x = 10;
	cout << x << endl;
	MyFunction();

	::x += 70;
	// :: تعني تخطالي السكوب إلي أنت فيه وإطلعلي على القلوبال 
	cout << ::x << endl;
}
