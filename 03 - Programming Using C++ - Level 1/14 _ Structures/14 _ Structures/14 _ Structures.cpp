
#include <iostream>
using namespace std;

// Structures مجموعة من المتغيرات إلهم علاقة مع بعض بنجمعهم تحت قروب واحد
// Structure is a datatype as integer
// Structure بتنظم الداتا
struct stAddress
{
	string Street1;
	string POPOX;
};
struct stOwner 
{
	string FullName;
	string Phone;
	stAddress Address;
};
struct Car
{
	string Brand;
	string Model;
	int Year;
	stOwner Owner;
};
int main()
{
	Car MyCar1, MyCar2, x;

	MyCar1.Brand = "BMW";
	MyCar1.Model = "XS";
	MyCar1.Year = 2000;
	MyCar1.Owner.FullName = "Mohammed Khaled";
	MyCar1.Owner.Phone = "0595303842";
	MyCar1.Owner.Address.POPOX = "";
	MyCar1.Owner.Address.Street1 = "";

	MyCar2.Brand = "Ford";
	MyCar2.Model = "Mustang";
	MyCar2.Year = 2002;
	MyCar2.Owner.FullName = "Mohammed Abu-Sultan";
	MyCar2.Owner.Phone = "0595303842";

	x.Brand = "Toyota";
	x.Model = "grwkkgw";
	x.Year = 2003;

	cout << MyCar1.Brand << endl << MyCar1.Model << endl << MyCar1.Year << endl;
	cout << MyCar2.Brand << endl << MyCar2.Model << endl << MyCar2.Year << endl;

	cout << MyCar1.Owner.FullName << endl << MyCar1.Owner.Phone << endl;
	cout << MyCar2.Owner.FullName << endl << MyCar2.Owner.Phone << endl;
}
