#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message)
{

	float Number = 0;

	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	
	return Number;

}

float HoursToDays(float NumberOfHours)
{

	return (float)NumberOfHours / 24;

}

float HoursToWeeks(float NumberOfHours)
{

	return (float)NumberOfHours / 24 / 7;

}

float DaysToWeeks(float NumberOfDays)
{

	return (float)NumberOfDays / 7;

}

int main()
{

	float NumberOfHours = ReadPositiveNumber("Enter Positive Number : ");
	float NumberOfDays = HoursToDays(NumberOfHours);
	float NumberOfWeeks= DaysToWeeks(NumberOfDays);

	cout << "\n";
	cout << "Total Hours = " << NumberOfHours << endl;
	cout << "Total Days = " << NumberOfDays << endl;
	cout << "Total Weeks = " << HoursToWeeks(NumberOfHours) << endl;


}

// MY SOLUTION حلي 
//#include <iostream>
//using namespace std;
//
//int ReadHours()
//{
//
//	int NumberOfHours = 0;
//
//	cout << "Enter hours : ";
//	cin >> NumberOfHours;
//
//	return NumberOfHours;
//
//}
//
//float CalculateDays(float NumberOfHours)
//{
//
//	return NumberOfHours;
//
//}
//
//int main()
//{
//
//	int N = ReadHours();
//
//	cout << CalculateDays(N) / 24 << " Days\n";
//
//	cout << CalculateDays(N) / (7*24) << " Weeks\n";
//
//	cout << CalculateDays(N) / (30 * 24) << " Month\n";
//
//	cout << CalculateDays(N) / (365*24) << " Years\n";
//
//}