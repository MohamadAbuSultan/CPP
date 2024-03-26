
#include <iostream>
#include "MyLib.h"
#include "MyInputLib.h"

using namespace std;
using namespace MyLib;
using namespace MyInputLib;

int main()
{
	Test();
	cout << endl;
	cout << Sum2Numbers(10, 20) << endl;

	int Number = ReadNumber();
	cout << Number << endl;
}
