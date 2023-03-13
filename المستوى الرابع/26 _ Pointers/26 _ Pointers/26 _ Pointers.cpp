
#include <iostream>

using namespace std;

int main()
{

	/*
	* 
	* pointer is a variable in memory , storage address for any thing in memroy
	* 
	* متغير بتقدر تخزن فيه عنوان متغير ثاني أو فنكشن ثاني
	* أو عنوان أوبجكت ثاني أو عنوان أي إشي ثاني 
	* لازم يكون من نفس نوع إلي بدو يأشر عليه
	* 
	*/

	int a = 10;
	int b = 50;

	cout << &a << endl;
	cout << &b << endl;

	int* p; // address بيأخذ فقط عنوان
	p = &a;
	cout << "Pointer : " << p << endl;
	p = &b;
	cout << "Pointer : " << p << endl;

	return 0;
}
