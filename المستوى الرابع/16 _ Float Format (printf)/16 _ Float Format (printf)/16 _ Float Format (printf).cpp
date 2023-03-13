
#include <iostream>

using namespace std;

int main()
{
	float PI = 3.14159265;

	// Precision specification : كم خانة بدك بعد النقطة العشرية تنطبع على الشاشة
	printf("Precision specification of %.*f\n", 1, PI);
	printf("Precision specification of %.*f\n", 2, PI);
	printf("Precision specification of %.*f\n", 3, PI);
	printf("Precision specification of %.*f\n", 8, PI);

	float x = 7.0, y = 9.0;
	printf("\nThe Float division is : %.3f / %.3f = %.3f \n\n", x, y, x / y);

	double d = 12.45;
	printf("the double value is : %.3f \n", d);
	printf("the double value is : %.4f \n", d);


}
