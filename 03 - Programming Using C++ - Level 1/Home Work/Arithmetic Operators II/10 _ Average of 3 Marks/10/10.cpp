
#include <iostream>
using namespace std;
int main()
{
	// #10 Average of 3 Marks
	cout << "enter mark1, mark2, mark3\n";
	int mark1, mark2, mark3;
	cin >> mark1 >> mark2 >> mark3;
	int result = (mark1 + mark2 + mark3) / 3;
	cout << result << endl;
}
