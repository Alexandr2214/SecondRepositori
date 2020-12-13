 #include <iostream>
#include <iomanip>
#include "windows.h"
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int n = 3;
    const int m = 3;
    double B[n][m] = { {-1, 1, 2},
                       {2, 1, 1},
                       {1, 2, 1} },p = 3, sum = 0;
    /*cout << "Введіть p";
    cin >> p;*/
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < m; j++)
        {
        
            cout << setw(10) << B[i][j];
            cout << endl;
            
            if (B[i][j] < p)
            {
                sum += B[i][j];
            }
            cout << setw(10) << "Ваша сума" << sum << B[i][j];
        }
    }
    system("pause");
    return 0;


}