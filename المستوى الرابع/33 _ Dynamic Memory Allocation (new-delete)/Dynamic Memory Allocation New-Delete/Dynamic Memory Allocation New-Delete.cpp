
#include <iostream>

using namespace std;

int main()
{
	// بتحجز المتغير لفترة معينة
	// every new => delete لازم نستخدم معها

	// Declare an integer pointer
	int* ptrX;

	// Declare an float pointer
	float* ptrY;

	// Dynamiclly allocate memory
	ptrX = new int;
	ptrY = new float;

	// Assigning value to the memory 
	*ptrX = 45;
	*ptrY = 58.35f;

	
	cout << *ptrX << endl;
	cout << *ptrY << endl;

	// Deallocate the memory
	delete ptrX;
	delete ptrY;

}
