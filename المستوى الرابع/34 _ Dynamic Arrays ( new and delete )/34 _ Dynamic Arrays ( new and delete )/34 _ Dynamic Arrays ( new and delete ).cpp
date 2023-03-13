
#include <iostream>

using namespace std;

int main()
{
	int number;
	cout << "Enter total number of student : ";
	cin >> number;

	float* ptr;

	// memory allocation of number of float
	ptr = new float[number];

	for (int i = 0; i < number; i++)
	{
		cout << "Student " << i + 1 << ": ";

		cin >> *(ptr + i);
	}


	cout << "\nDisplaying grades of students." << endl;
	for (int i = 0; i < number; i++)
	{
		cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;
	}

	// ptr memory is released
	delete[] ptr;
 
}
