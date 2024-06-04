

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	int x[3][4] = {
					{1,2,3,4},
					{5,6,7,8},
					{9,10,11,12}
				  };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << x[i][j] << " " ;
		}
		cout << endl;
	}

	cout << endl << endl;
	

	int x1[3][4] = {
					{1,2,3,4},
					{5,6,7,8},
					{9,10,11,12}
	};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << setfill('0') << setw(2) << x1[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl << endl;

	// Home Work

	int m[10][10];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			m[i][j] = (i + 1) * (j + 1);
		}
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%0*d ", 2, m[i][j]);
		}
		cout << endl;
	}


	/*
	int x2[10][10] = {
		{1,2,3,4,5,6,7,8,9,10},
		{1,2,3,4,5,6,7,8,9,10},
		{1,2,3,4,5,6,7,8,9,10},
		{1,2,3,4,5,6,7,8,9,10},
		{1,2,3,4,5,6,7,8,9,10},
		{1,2,3,4,5,6,7,8,9,10},
		{1,2,3,4,5,6,7,8,9,10},
		{1,2,3,4,5,6,7,8,9,10},
		{1,2,3,4,5,6,7,8,9,10},
		{1,2,3,4,5,6,7,8,9,10},
	};
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			printf("%0*d\t", 2, x2[i][i] * x2[j][j]);
		}
		cout << endl;
	}
	*/

	return 0;
}
