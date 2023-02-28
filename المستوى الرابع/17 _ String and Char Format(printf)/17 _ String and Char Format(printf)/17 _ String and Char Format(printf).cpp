
#include <iostream>

using namespace std;

int main()
{
	char Name[] = "Mohamad Abu-Sultan";
	char SchoolName[] = "Programming Advices";

	// printf لا يتعامل مع السترينق string
	// printf don't work with string
	// 
	//Print string and String
	printf("Dear %s, How are you?\n\n", Name);
	printf("Welcome to %s School!\n\n", SchoolName);

	// how to set width of character
	char c = 'S';
	printf("Setting The width of c : %*c \n", 1, c);
	printf("Setting The width of c : %*c \n", 2, c);
	printf("Setting The width of c : %*c \n", 3, c);
	printf("Setting The width of c : %*c \n", 4, c);
	printf("Setting The width of c : %*c \n", 5, c);

}
