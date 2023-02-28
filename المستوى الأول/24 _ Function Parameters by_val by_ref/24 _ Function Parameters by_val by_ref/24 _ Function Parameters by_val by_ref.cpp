

#include <iostream>
#include <string>
using namespace std;


			 //إلي في الفنكشن Num1 هاي نسخة ثانية
void MyFunction(int Num1) {

	// Function Parameters By-Value هاي بنسميها
	// default = by value
	// by value : الفنكشن إستنسخ نسخة ثانية منها وعدل على النسخة الثانية
	// النسخة الأصلية بتضلها موجودة 
	// by value : (variable)عمل نسخة ثانية من الفاريابل
	// عمل كوبي أو نسخة من المتغير وعدل عالنسخة ، بالتالي هي بتتتعدل جوات الفنكشن ولما بطلع برا الفنكشن بتضلها القيمة زي ما هيا
	
	Num1 = 7000;
	cout << Num1 << endl;
}


				// بعدل عالمتغير الأصلي
void MyFunction2(int &Num2) {

	// Function Parameters By-Reference هاي بنسميها
	// by-reference لو بدي المتغير الأصلي شو ما صار فيه بالفنكشن ، يتغير ، بنعملها 
	// & : addressما بعمل نسخة ثانية من المتغير ، بعدل على المتغير الأصلي لأنه بكون بعتله ال
	// ما بيعمل نسخة ثانية ، بعدل عالأصلية 

	Num2 = 7000;
	cout << Num2 << endl;
}


int main()
{

	// هاي الأصلية 
	int Num1;

	Num1 = 1000;

	MyFunction(Num1);
	
	cout << "by-val " << Num1 << endl; // هيطبع 1000 لأنوا فوق بالفنكشن كانت نسخة ثانية ما عدلنا عالأصلية


	int Num2;

	Num2 = 1000;

	MyFunction2(Num2);

	cout << "by-ref " << Num2 << endl;


	cout << &Num1 << endl; // reference get the address of the variable
	cout << &Num2 << endl; // reference get the address of the variable
}
