
#include <iostream>
using namespace std;

// enums are label and you assign value for each one 
enum Color { Red, Green, Yellow, Blue };
enum Direction { North, South, East, West };
enum Week { Sat, Sun, Mon, Tue, Wed, Thu, Fri };
enum Gender { Male, Female };
enum Status { Single, Married };

int main()
{
	Color MyColor;
	Direction MyDirection;
	Week Today;
	Gender MyGender;
	Status MyStatus;

	MyColor = Color::Blue;
	
	MyDirection = Direction::North;
	Today = Week::Fri;
	MyStatus = Status::Married;

	cout << Color::Yellow << endl;
}