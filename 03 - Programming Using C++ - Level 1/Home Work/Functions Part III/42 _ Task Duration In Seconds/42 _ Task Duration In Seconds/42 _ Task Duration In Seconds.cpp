

#include <iostream>
using namespace std;

void DurationToSeconds(int days, int hours, int minutes, int seconds) {
	cout << (days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + seconds;
}
int main()
{
	int days, hours, minutes, seconds;
	cin >> days >> hours >> minutes >> seconds;
	DurationToSeconds(days, hours, minutes, seconds);
}

