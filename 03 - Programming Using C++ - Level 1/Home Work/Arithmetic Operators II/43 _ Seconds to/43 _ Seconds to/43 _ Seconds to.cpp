
#include <iostream>
using namespace std;
int main()
{
	int TotalSeconds;
	cin >> TotalSeconds;
	
	int SecondsPerDay = 24 * 60 * 60;
	int SecondsPerHour = 60 * 60;
	int SecondsPerMinute = 60;
	
	double NumberOfDays = floor(TotalSeconds / SecondsPerDay);
	int Reminder = TotalSeconds % SecondsPerDay;
	
	double NumberOfHours = floor(Reminder / SecondsPerHour);
	Reminder%=SecondsPerHour;

	double NumberOfMinutes = floor(Reminder / SecondsPerMinute);
	Reminder %= SecondsPerMinute;

	double NumberOfSeconds = Reminder;

	cout << NumberOfDays << " " << NumberOfHours << " " << NumberOfMinutes << " " << NumberOfSeconds << endl;

}
