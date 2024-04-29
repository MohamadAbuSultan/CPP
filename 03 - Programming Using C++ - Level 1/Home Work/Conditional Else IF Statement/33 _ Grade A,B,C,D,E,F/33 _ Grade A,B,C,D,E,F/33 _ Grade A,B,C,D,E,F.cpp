
#include <iostream>
using namespace std;
int main()
{
	int Grade;
	cin >> Grade;
	
	if (Grade <= 100 && Grade >= 90) {
		cout << "A" << endl;
	}
	else if (Grade <= 89 && Grade >= 80) {
		cout << "B" << endl;
	}
	else if (Grade <= 79 && Grade >= 70) {
		cout << "C" << endl;
	}
	else if (Grade <= 69 && Grade >= 60) {
		cout << "D" << endl;
	}
	else if (Grade <= 59 && Grade >= 50) {
		cout << "E" << endl;
	}
	else if (Grade > 100) {
		cout << "Out Of Range" << endl;
	}
	else { cout << "F"; }
}
