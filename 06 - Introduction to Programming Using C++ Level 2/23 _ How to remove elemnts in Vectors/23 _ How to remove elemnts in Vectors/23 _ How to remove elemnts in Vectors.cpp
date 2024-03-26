#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector <int> vNumbers;

	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30);
	vNumbers.push_back(40);
	vNumbers.push_back(50);
	cout << "Stack Size : " << vNumbers.size() << endl;

	vNumbers.pop_back(); // بشيل آخر عنصر دخل

	vNumbers.clear(); // بفضي الستاك كله

	cout << "Vector Numbers = ";
	for (int& Number : vNumbers)
	{
		cout << Number << endl;
	}

}
