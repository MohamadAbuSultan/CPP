
#include <iostream>
using namespace std;

enum enWeekDay { Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7 };

void ShowWeekDayMenue() {
	cout << "**********************\n";
	cout << "\tWeek Days	   \n";
	cout << "**********************\n";
	cout << "1: Sunday\n";
	cout << "2: Monday\n";
	cout << "3: Thuesday\n";
	cout << "4: Wedensday\n";
	cout << "5: Thursday\n";
	cout << "6: Friday\n";
	cout << "7: Saturday\n";
	cout << "**********************\n";
	cout << "Enter the number of the day\n";
}

enWeekDay ReadWeekDay() {
	enWeekDay WeekDay;

	int wd;
	cin >> wd;
	return (enWeekDay)wd;
}

string GetWeekDayName(enWeekDay WeekDay)
{
	switch (WeekDay)
	{
	case enWeekDay::Sun:
		return "Sunday";
		break;
	case enWeekDay::Mon:
		return "Monday";
		break;
	case enWeekDay::Tue:
		return "Tuesday";
		break;
	case enWeekDay::Wed:
		return "Wedensday";
		break;
	case enWeekDay::Thu:
		return "Thursday";
		break;
	case enWeekDay::Fri:
		return "Friday";
		break;
	case enWeekDay::Sat:
		return "Saturday";
		break;
	default:
		return "Not a week day";
		break;
	}
}

int main()
{
	ShowWeekDayMenue();

	cout << GetWeekDayName(ReadWeekDay()) << endl;
}
