
#include <iostream>
using namespace std;
int main()
{
	double BillValue;
	cin >> BillValue;
	double TotalBill = BillValue * 1.1;
	TotalBill *= 1.16;
	cout << TotalBill << endl;
	// لما بدنا نضرب ب 10% بنضرب ب1.1 
	// هاي طريقة مختصرة
	// مثلاً لو بدنا نعمل خصم 50% بنضرب ب 1.50
	// وهكذا
	// 1.الرقم
	return 0;
}
