
#include <iostream>
using namespace std;

struct strTaskDuration
{
	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

int ReadPositiveNumber(string Message)
{

	int Number = 0;

	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number<=0);


	return Number;

}

strTaskDuration SecondsToTaskDuration(int TotalSeconds)
{

	strTaskDuration TaskDuration;

	const int SecondsPerDay = 24 * 60 * 60;
	const int SecondsPerHour = 60 * 60;
	const int SecondsPerMinute = 60;

	int Reminder = 0;

	TaskDuration.NumberOfDays = floor(TotalSeconds / SecondsPerDay);
	Reminder = TotalSeconds % SecondsPerDay;

	TaskDuration.NumberOfHours = floor(Reminder / SecondsPerHour);
	Reminder %= SecondsPerHour;

	TaskDuration.NumberOfMinutes = floor(Reminder / SecondsPerMinute);
	Reminder %= SecondsPerMinute;

	TaskDuration.NumberOfSeconds = Reminder;

	return TaskDuration;

}

void PrintTaskDurationDetails(strTaskDuration TaskDuration)
{
	cout << "\n";

	cout << TaskDuration.NumberOfDays << ":"
		<< TaskDuration.NumberOfHours << ":"
		<< TaskDuration.NumberOfMinutes << ":"
		<< TaskDuration.NumberOfSeconds << "\n";

}

int main()
{

	int TotalSeconds = ReadPositiveNumber("Enter Total Seconds ? ");
	
	PrintTaskDurationDetails(SecondsToTaskDuration(TotalSeconds));

}
