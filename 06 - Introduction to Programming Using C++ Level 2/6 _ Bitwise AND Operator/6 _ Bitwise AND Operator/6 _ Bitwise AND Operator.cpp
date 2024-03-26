
#include <iostream>
using namespace std;

int main()
{
	// 12 = 00001100 (IN BINARY)
	// 25 = 00011001 (IN BINARY)
	// 00001100 & 00011001 = 00001000 = 8 (IN DECIMAL)
	cout << "Result = " << (12 & 25);
	return 0;
}
