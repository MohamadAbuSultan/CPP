

 #include <iostream>

using namespace std;

// Divide & Conquer فرق تَسُد 

int ReadTotalSales()
{

	int TotalSales;

	cout << "Enter TotalSales : ";
	cin >> TotalSales;

	return TotalSales;

}

float GetComissionPercantage(int TotalSales)
{

	if (TotalSales >= 1000000)
		return 0.01;
	else if (TotalSales >= 500000)
		return 0.02;
	else if (TotalSales >= 100000)
		return 0.03;
	else if (TotalSales >= 50000)
		return 0.05;
	else
		return 0;

}

float GetTotalComission(int TotalSales)
{
	return GetComissionPercantage(TotalSales) * TotalSales;
}

int main()
{

	float TotalSales = ReadTotalSales();
	cout << endl << "Percantage is : " << GetComissionPercantage(TotalSales);
	cout << endl << "Total is : " << GetTotalComission(TotalSales);

}