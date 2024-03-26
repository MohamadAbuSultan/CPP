

#include <iostream>

using namespace std;

int main()
{
	void* ptr;

	int x = 50;

	float y = 10.5;

	ptr = &y;
	cout << ptr << endl;
	cout << *(static_cast<float*>(ptr)) << endl;

	ptr = &x;
	cout << ptr << endl;
	cout << *(static_cast<int*>(ptr)) << endl;

	
}
