#pragma once

#include <string>
#include <iostream>
using namespace std;

namespace Input
{

	int ReadPositiveNumber()
	{
		cout << "Enter A Positive Number" << endl;
		int Number = 0;
		do
		{
			cin >> Number;
		} while (Number <= 0);
		return Number;
	}
}