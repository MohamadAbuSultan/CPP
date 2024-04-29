
#include <iostream>
#include <cmath>

using namespace std;

int ReadNumber()
{

    int Number;

    cout << "Enter Number : ";
    cin >> Number;

    return Number;

}

int ReadPower()
{

    int M;

    cout << "Enter Power : ";
    cin >> M;

    return M;

}

int PowerOfM(int Number, int M)
{

    if (M == 0)
        return 1;

    int P = 1;

    for (int i = 1; i <= M; i++)
    {
        P *= Number;
    }
    
    return P;
}

int main()
{
    // call stack in function ببلش من اليمين لليسار
    cout << PowerOfM(ReadNumber(), ReadPower());
    // main بال read لما بدنا نعملها صح لازم نعرف متغير لل 
    // \n عملتها تحت ، زبطتها تحتتتتت ، تحت السلاش ان
   
    cout << "\n";

    int N = ReadNumber();
    int P = ReadPower();
    
    cout << PowerOfM(N, P);
    
}


//      
//      #include <iostream>
//      #include <cmath>
//      
//      using namespace std;
//      
//      void ReadNumber(int& Number, int& M)
//      {
//      
//          cout << "Enter Number : ";
//          cin >> Number;
//      
//          cout << "\nEnter M ";
//          cin >> M;
//      
//      }
//      
//      double PowerOfNumber(int Number, int M)
//      {
//          
//          double Result = pow(Number, M);
//      
//          return Result;
//      
//      }
//      
//      int main()
//      {
//          int Number, M;
//      
//          ReadNumber(Number, M);
//      
//          cout << PowerOfNumber(Number, M);
//      
//      }
