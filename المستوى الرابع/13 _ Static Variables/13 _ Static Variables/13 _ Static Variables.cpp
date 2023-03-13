
#include <iostream>
using namespace std;

// static يحافظ على القيمة تبعته في الميموري
// static تبع البرنامج life time متغير يتم الإحتفاظ بقيمته على طول ال 
// static فترة حياته هي فترة حياة البرنامج نفسه

void MyFunc()
{

	static int Number = 1;
	cout << "Value of number: " << Number << endl;

	Number++;
}

// تبعه scope العادي بتم تدميره بمجرد ما إنتهى ال variable ال 

int main()
{
	MyFunc();
	MyFunc();
	MyFunc();

	return 0;
}
