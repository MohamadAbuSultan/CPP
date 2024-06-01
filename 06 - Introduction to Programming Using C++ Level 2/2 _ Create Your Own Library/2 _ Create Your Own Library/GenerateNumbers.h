#pragma once

#include <iostream>

using namespace std;

namespace GenerateNumbers{

	int GenerateRandomNumbers(int from, int to) {
		return rand() % (to - from + 1) + from;
	}
}