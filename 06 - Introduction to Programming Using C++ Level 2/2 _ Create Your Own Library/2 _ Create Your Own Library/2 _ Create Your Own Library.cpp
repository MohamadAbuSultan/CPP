
#include <iostream>
#include "MyLib.h"
#include "MyInputLib.h"
#include "GenerateNumbers.h"

using namespace std;
using namespace MyLib;
using namespace MyInputLib;
using namespace GenerateNumbers;

int main()
{
	/*Test();
	cout << endl;
	cout << Sum2Numbers(10, 20) << endl;

	int Number = ReadNumber();
	cout << Number << endl;
	*/

	srand((unsigned)time(NULL));
	cout << GenerateNumbers::GenerateRandomNumbers(1, 100) << endl;
	cout << GenerateRandomNumbers(1, 100) << endl;
	cout << GenerateRandomNumbers(1, 100) << endl;
	cout << GenerateRandomNumbers(1, 100) << endl;
	cout << GenerateRandomNumbers(1, 100);
	
}
