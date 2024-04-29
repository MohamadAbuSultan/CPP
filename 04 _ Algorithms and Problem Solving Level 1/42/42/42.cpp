


#include <iostream>

using namespace std;

struct strTaskDuration
{
	int NumberOfDays,NumberOfHours, NumberOfMinutes, NumberOfSeconds;
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

strTaskDuration ReadTaskDuration()
{

	strTaskDuration TaskDuration;

	TaskDuration.NumberOfDays = ReadPositiveNumber("Enter The Number Of Days : ");
	TaskDuration.NumberOfHours = ReadPositiveNumber("Enter The Number Of Hours : ");
	TaskDuration.NumberOfMinutes = ReadPositiveNumber("Enter The Number Of Minutes : ");
	TaskDuration.NumberOfSeconds = ReadPositiveNumber("Enter The Number Of Seconds : ");

	return TaskDuration;

}

int TaskDurationInSeconds(strTaskDuration TaskDuration)
{

	int DurationInSeconds = 0;

	DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
	DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
	DurationInSeconds += TaskDuration.NumberOfMinutes * 60;
	DurationInSeconds += TaskDuration.NumberOfSeconds;

	return DurationInSeconds;
}

int main()
{

	cout << "Number Of Seconds : " << TaskDurationInSeconds(ReadTaskDuration());

}



// MY SOLUTION حلي
//#include <iostream>
//using namespace std;
//struct stTaskDuration { int Seconds, Minutes, Hours, Days; };
//
//void ReadNumber(stTaskDuration& TaskDuration)
//{
//
//    cout << "Enter Seconds : ";
//    cin >> TaskDuration.Seconds;
//
//    cout << "Enter Minutes : ";
//    cin >> TaskDuration.Minutes;
//
//    cout << "Enter Hours : ";
//    cin >> TaskDuration.Hours;
//
//    cout << "Enter Days : ";
//    cin >> TaskDuration.Days;
//
//}
//
//int DurationToSeconds(stTaskDuration TaskDuration)
//{
//
//    int TotalSeconds = TaskDuration.Seconds + TaskDuration.Minutes * 60
//        + TaskDuration.Hours * 60 * 60 + TaskDuration.Days * 24 * 60 * 60;
//
//    return TotalSeconds;
//
//}
//
//int main()
//{
//    stTaskDuration TaskDuration;
//    ReadNumber(TaskDuration);
//    cout << DurationToSeconds(TaskDuration) << " Seconds\n";
//}
