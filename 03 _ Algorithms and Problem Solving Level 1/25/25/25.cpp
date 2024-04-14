
#include <iostream>
using namespace std;

int ReadAge() {
	int Age;
	cout << "Enter your Age Between 18 and 45 : ";
	cin >> Age;

	return Age;
}


// generic	function
// ممكن نستخدمه بأي إشي ، بأي مكان ، مثلاً لو بدنا نفحص إذا العلامة بين صفر ومئة
bool ValidateNumberInRange(int Number, int From, int To) {
	return (Number >= From && Number <= To);
}


int ReadUntilAgeBetween(int From, int To) {
	int Age = 0;

	do
	{
		Age = ReadAge();
	} while (!ValidateNumberInRange(Age, From,  To));

	return Age;
}

void PrintResult(int Age) {
	if (ValidateNumberInRange(Age, 18, 45))
		cout << Age << " is a valid age\n";
	else
		cout << Age << " is invalid age\n";
}

int main()
{
	PrintResult(ReadUntilAgeBetween(18,45));

	return 0;
}