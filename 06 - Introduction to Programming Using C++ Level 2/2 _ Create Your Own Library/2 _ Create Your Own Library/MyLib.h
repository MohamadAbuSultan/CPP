#pragma once

#include <iostream>
using namespace std;

namespace MyLib {

	void Test() {
		cout << "Hello , this is my first function in my first library";
	}

	int Sum2Numbers(int Number1, int Number2)
	{
		return Number1 + Number2;
	}

}
