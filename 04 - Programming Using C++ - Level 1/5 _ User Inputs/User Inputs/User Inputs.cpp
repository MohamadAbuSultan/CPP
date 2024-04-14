
#include <iostream>
using namespace std;
int main()
{
    /*
    char MyChar;
    int MyNumber;

    cout << "Please enter a char ? " << endl;
    cin >> MyChar;

    cout << "Please enter a Number ? " << endl;
    cin >> MyNumber;

    cout << "you entered character: " << MyChar << " , and number: " << MyNumber << endl;
    */
    // Homework
    string Name;
    int Age;
    string City;
    string Country;
    float MonthlySalary;
    char Gender;
    bool Married;
    cout << "Enter Your Name : " << endl;
    cin >> Name;
    cout << "Enter Your Age : " << endl;
    cin >> Age;
    cout << "Enter Your City : " << endl;
    cin >> City;
    cout << "Enter Your Country : " << endl;
    cin >> Country;
    cout <<"Your Monthly Salary "  << endl;
    cin >> MonthlySalary;
    cout <<"Your Gender " << endl;
    cin >> Gender;
    cout << "You Married ? 1 or 0" << endl;
    cin >> Married;
    cout << "***************" << endl;
    cout << "Name : " << Name << endl;
    cout << "Age : " << Age << endl;
    cout << "City : " << City << endl;
    cout << "Country : " << Country << endl;
    cout << "Monthly Salary : " << MonthlySalary << endl;   
    cout << "Yearly Salary : " << MonthlySalary * 12 << endl;
    cout << "YourGender : " << Gender << endl;
    cout << "IsMarried : " << Married << endl;
    cout << "***************" << endl;

    return 0;
}
