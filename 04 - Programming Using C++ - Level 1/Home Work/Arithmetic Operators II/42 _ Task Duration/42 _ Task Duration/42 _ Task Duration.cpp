
#include <iostream>
using namespace std;
int main()
{
	int day, hours, minutes, seconds;
	cin >> day >> hours >> minutes >> seconds;
	double TotalSeconds = (day * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + seconds;
	cout << TotalSeconds << endl;
}