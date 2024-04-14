
#include <iostream>
using namespace std;

int ReadAge() {
	int Age;
	cout << "Enter your Age : ";
	cin >> Age;

	return Age;
}
	
	 // generic	function
bool ValidateNumberInRange(int Number, int From, int To) {
	return (Number >= From && Number <= To);
}
	 // ممكن نستخدمه بأي إشي ، بأي مكان ، مثلاً لو بدنا نفحص إذا العلامة بين صفر ومئة
	 
void PrintResult(int Age) {
	if (ValidateNumberInRange(Age, 18, 45))
		cout << Age << " is a valid age\n";
	else
		cout << Age << " is invalid age\n";
}

int main()
{
	PrintResult(ReadAge());

	return 0;
}