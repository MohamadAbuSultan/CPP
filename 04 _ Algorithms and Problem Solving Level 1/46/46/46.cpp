
#include <iostream>
#include <string>
using namespace std;

void PrintLettersAToZ()
{

	for (int i = 65; i <= 90; i++)
	{
		cout << char(i) << endl;
	}

}

void PrintLetters_a_To_C()
{
	
	for (int i = 97; i <= 122; i++)
	{

		cout << char(i) << endl;

	}
}

int main()
{
	PrintLettersAToZ();
	cout << "*******" << endl;
	PrintLetters_a_To_C();
}
