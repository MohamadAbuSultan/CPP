
#include <iostream>

using namespace std;

int main()
{
	/*
	* 
	* reference: هو إسم دلع للمتغير يلتصق فيهVARIABLE
	*	زي مثلاً بندلع محمد : حمادة وحمودة
	*  
	* pointer هو متغير له مكانه الخاص في الذاكرة 
	* لا reference بينما ال 
	* 
	* pointer وال reference الفرق بين ال
	* ما بتقدر تغيره خلص assign to value مجرد ما عملتله  reference أنو ال
	* reference بنستخدمه مرة وحدة وما بنقدر نغيره في الrun time
	* p = &b; بتقدر تغيره لمتغير ثاني كما في سطر 38 pointer أما ال 
	*/

	int a = 10;
	int &x = a;


	cout << &a << endl;
	cout << &x << endl;

	cout << a << endl;
	cout << x << endl;

	int* p = &a;

	cout << p << endl;
	cout << *p << endl;

	int b = 20;
	p = &b;

	cout << p << endl;
	cout << *p << endl;

	return 0;

}
