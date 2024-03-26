
#include <iostream>
#include <string>
using namespace std;
enum enDayOfWeek { Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fri = 7 };

int ReadNumberInRange(string Message, int From, int To)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < From || Number > To);

	
	return Number;

}

enDayOfWeek ReadDayOfWeek()
{

	return (enDayOfWeek)ReadNumberInRange("Please Enter day number : " , 1 , 7);

}

string GetDayOfWeek(enDayOfWeek Day)
{

	switch (Day)
	{
	case Sat:
		return "Saturday";
		break;
	case Sun:	
		return "Sunday";
		break;
	case Mon:
		return "Monday";
		break;
	case Tue:
		return "Tuesday";
		break;
	case Wed:
		return "Wedensday";
		break;
	case Thu:
		return "Thursday";
		break;
	case Fri:
		return "Friday";
		break;
	default:
		return "Not A Valid Day";
		break;
	}

}

int main()
{
	cout << GetDayOfWeek(ReadDayOfWeek()) << endl;
}