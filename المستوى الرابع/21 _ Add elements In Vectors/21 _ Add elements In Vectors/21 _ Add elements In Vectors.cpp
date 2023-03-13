#include <vector>
#include <iostream>
using namespace std;

void ReadNumbers(vector <int>& vNumbers)
{
	char ReadMore = 'Y';
	int Number;

	while (ReadMore == 'Y' || ReadMore == 'y')
	{

		cout << "Enter a number ?" << endl;
		cin >> Number;

		vNumbers.push_back(Number);

		cout << "\nDo you want to read more number ? y/n ? ";
		cin >> ReadMore;

	}

}

void PrintVectorNumbers(vector <int>& vNumbers)
{
	cout << "\n\nNumbers Vector : ";
	for (int Number : vNumbers)
		cout << Number << " ";
	cout << "\n\n";
}

int main()
{
	//vector <int> VNumbers;
	//VNumbers.push_back(10);
	//VNumbers.push_back(20);
	//VNumbers.push_back(30);
	//VNumbers.push_back(40);
	//VNumbers.push_back(50);
	//VNumbers.push_back(60);

	//// ranged loop
	//for (int &Number : VNumbers){
	//	cout << Number << endl;
	//}



	// HomeWork
	vector <int> vNumbers;
	ReadNumbers(vNumbers);
	PrintVectorNumbers(vNumbers);

	return 0;
}