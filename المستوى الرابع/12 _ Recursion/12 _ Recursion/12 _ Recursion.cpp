
#include <iostream>
using namespace std;

 // stack
 // stack overflow ممكن يصير 
 // الستاك مثل الخزان ، ما بصير تضل تحط فيه مي 
 // stack isn't unlimited 
 // recursion مش محبب تعملها

void PrintNumbers(int N, int M)
{

	if (N <= M)
	{
		cout << N << endl;
		PrintNumbers(N + 1, M);
	}

}


// HomeWork
void PrintNumbersFromMtoN(int N, int M)
{

	if (N <= M)
	{
		cout << M << endl;
		PrintNumbersFromMtoN(N, M - 1);
	}

}

int MyPower(int Base, int Power)
{


	if (Power == 0)
	{
		return 1;
	}
	else
	{
		return (Base * MyPower(Base, Power - 1));
	}

}

int main()
{
	PrintNumbers(1, 10);


	PrintNumbersFromMtoN(1, 10);


	cout << MyPower(2,4);


	return 0;
}
