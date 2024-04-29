

#include <iostream>
#include <string>
using namespace std;
int main()
{
	
	// * Convert string st1 = "43.22" to double, float, and int.
	string st1 = "43.22";
	int x = stoi(st1);
	float y = stof(st1);
	double z = stod(st1);
	cout << x << " " << y << " " << z << endl;


	// * Convert integer N1 = 20 to string.
	int N1 = 20;
	string stri = to_string(N1);
	cout << stri << endl;


	// * Convert double N2 = 33.5 to string.
	double N2 = 33.5;
	string strd = to_string(N2);
	cout << strd << endl;


	// * Convert float N3 = 55.23 to string, and integer. 
	float N3 = 55.23;
	string strf;
	strf = to_string(N3);
	cout << strf << endl;
	
}