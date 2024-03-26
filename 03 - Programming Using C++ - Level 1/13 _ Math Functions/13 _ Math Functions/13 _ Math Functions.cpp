

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	// Squair Root (sqrt) الجذر التربيعي
	double x = 64;
	// parameters
	cout << sqrt(x) << endl; // 8
	cout << sqrt(50) << endl; // 7.07107

	// الفنكشن هو جزء من الكود أنا بكتبه عشان أعيد إستخدامه

	// Rounding Numbers (round) تقريب الأرقام لأقرب عدد صحيح
	cout << round(2.4) << endl; // 2
	cout << round(2.5) << endl; // 3
	cout << round(2.7) << endl; // 3
	cout << round(2.4) + round(5.6) << endl;
	cout << round(sqrt(50)) << endl; // 7
	// إستدعاء فنكشن داخل فنكشن 
	// variable الفنكشن بنتعامل معها زي ال 


	// Power Function (pow) الأس 
	int i = 2, j = 4;
	cout << pow(i, j) << endl;
	cout << pow(i, 2) << endl;

	// تقريب الأرقام Ceil & Floor Function (ceil السقف , floor الأرضية)  
	cout << ceil(2.9) << endl; // لأكبر رقم صحيح أكبر منها
	cout << floor(2.9) << endl; // لأكبر رقم صحيح أقل منها

	cout << ceil(-2.9) << endl; // -2
	cout << floor(-2.9) << endl; // -3

	
	// Absolute Function (abs) القيمة المطلقة
	cout << abs(10) << endl;
	cout << abs(-10) << endl;

}

