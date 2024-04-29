
#include <iostream>
using namespace std;
// function نتيجتهم قيمة واحدة
void MyProcedure()
{
	cout << "This is my first Procedures" << endl;
}

string MyFunction1() 
{
	return "This is my first returning function, this is the value";
}

int MyFunction2()
{
	int x = 10;
	int y = 20;
	return x * y;
}
int main()
{
	MyProcedure();
	cout << MyFunction1() << endl;
	cout << MyFunction2() << endl;
}