
#include <iostream>
using namespace std;
int main()
{
    int MyAge = 20;
    cout << "My Age in 2022 : " << MyAge << endl;

    MyAge = 21;
    cout << "My Age in 3/1/2023 : " << MyAge << endl;

    int myNumber = 52;
    float myFloatNumber = 7.84;
    double myDoubleNumber = 21.89822;
    char myLetter = 'M'; 
    string myText = "\'Mohammed\'"; // array of character
    bool myBoolean = true;
    
    cout << "My Number is : " << myNumber << endl;
    cout << "My Float Number is : " << myFloatNumber << endl;
    cout << "My Double Number is : " << myDoubleNumber << endl;
    cout << "My Letter is : " << myLetter << endl;
    cout << "My Text is : " << myText << endl;
    cout << "My Boolean is : " << myBoolean << endl;
    
    int x = 4, y = 10, sum = x + y;
    cout << "Sum of x + y is : " << sum << endl;

    const int MinutesPerHour = 60;
    cout << MinutesPerHour << endl;

    // Homework

    /* Homework1
    Are the following valid variable namesand why ?

    • Age                       Yes
    • My - Age     No (special characters)
    • My_Age                    Yes
    • _Age                      Yes
    • 2x           No (ما بنفع نبدأ برقم)
    • X2                        Yes
    • My Name      No (في فراغ white space)
    • MyName                    Yes
    • #Name        No (special characters)
    • $ Name       No (special characters)
    • N @ me       No (special characters)
    • int          No (reserved keywords)
    • float        No (reserved keywords)
    */

    /* Homework2 
    Write a program to do the following :-

    ******************************
    Name : Mohammed Abu-Hadhoud .
    Age : 44 Years .
    City : Amman .
    Country : Jordan .
    Monthly Salary : 5000
    Yearly Salary : 60000
    Gender : M
    Married : 1
    ******************************
    */
    
    // حل الواجب الثاني
    string MyName = "Mohamed Abu-Sultan";
    int Age = 44;
    string MyCity = "Gaza";
    string MyCountry = "Palestine";
    float MyMonthlySalary = 3000;
    float MyYearlySalary = 36000;
    char MyGender = 'M';
    bool IsMarried = false;
    cout << "**************************" << endl;
    cout << "Name : " << MyName << endl;
    cout << "Age : " << MyAge << endl;
    cout << "City : " << MyCity << endl;
    cout << "Country : " << MyCountry << endl;
    cout << "Monthly Salary : " << MyMonthlySalary << endl;
    cout << "Yearly Salary : " << MyMonthlySalary * 12 << endl;
    cout << "Gender : " << MyGender << endl;
    cout << "Married : " << IsMarried << endl;
    cout << "**************************\n" << endl;

    // Homework3
    int a = 20, b = 30, c = 10;
    cout << a << " + " << endl;
    cout << b << " + " << endl;
    cout << c << endl;
    cout << "-----------" << endl;
    cout << a + b + c << endl << endl;

    // Homework4
    int age = 5;
    cout << "After " << age << " years you will be ";
    age = 30;
    cout << age << " years old.\n";
    cout << "After 5 years you will be " << age << " years old.";
    return 0;
}
