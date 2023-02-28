

#include <iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	if (x > 5 && x < 8) {
		cout << "The code of if body has executed" << endl;
	}
	else {
		cout << "Hello" << endl;
	}

	cout << "The code after if body always executed" << endl;

	return 0;
}
