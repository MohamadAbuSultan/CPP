
#include <iostream>

using namespace std;

enum enOpertaionType { Add = '+', Subrtact = '-',
	Multiply = '*', Divide = '/' };

float ReadNumber(string Message)
{

	float Number = 0;

	cout << Message << endl;

	cin >> Number;

	return Number;

}

enOpertaionType ReadOpType()
{

	char OT = '+';

	cout << "Enter Operation Type (+,-,*,/)?\n";
	cin >> OT;

	return (enOpertaionType)OT;
}

float Calculate(float Number1, float Number2, enOpertaionType OpType)
{

	switch (OpType)
	{
	case Add:
		return Number1 + Number2;
	case Subrtact:
		return Number1 - Number2;
	case Multiply:
		return Number1 * Number2;
	case Divide:
		return Number1 / Number2;
	default:
		break;
	}

}

int main()
{

	float Number1 = ReadNumber("Enter The First Number : ");
	float Number2 = ReadNumber("Enter The Second Number : ");

	enOpertaionType OpType = ReadOpType();

	cout << endl << "Result = " << Calculate(Number1, Number2, OpType) << endl;

}
