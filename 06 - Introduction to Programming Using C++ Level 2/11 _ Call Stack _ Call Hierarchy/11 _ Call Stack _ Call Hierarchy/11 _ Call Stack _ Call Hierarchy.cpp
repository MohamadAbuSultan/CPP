
#include <iostream>
using namespace std;

// in stack : Last In First Out (LIFO)
// call stack : functions تدرج إستدعاءالفنكنشنز
 
void Function44()
{
	cout << "Its Function4" << endl;
}
void Function3()
{
	Function44();
}
void Function2()
{
	Function3();
}

void Function1()
{
	Function2();
}

int main()
{
	Function1();

	return 0;
}
