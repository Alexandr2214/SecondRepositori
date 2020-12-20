

#include <iostream>
#include <iomanip>
#include "windows.h"

using namespace std;


struct Train
{
    char name[50];
    int numder;
    char place;
    float time;
    float price;

};




int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);




    const int m = 4;
    Train T[m] = { {"Kyiv", 1, 'Lviv', 15.00, 150},
                  {"Kharkiv", 2, 'Lviv', 16.00, 200},
                  {"Mykolaiv", 3, 'Lviv', 17.00, 300},
                  {"Chernivci", 4, 'Lviv', 18.00, 250 } };

    cout << "Час відправлення до Львова поїздом Київ-Львів " << T[0].time << endl << "Вартість квитка " << T[0].price << endl;
    cout << "Час відправлення до Львова поїздом Харків-Львів " << T[1].time << endl << "Вартість квитка " << T[1].price << endl;
    cout << "Час відправлення до Львова поїздом Миколаїв-Львів " << T[2].time << endl << "Вартість квитка " << T[2].price << endl;
    cout << "Час відправлення до Львова поїздом Чернівці-Львів " << T[3].time << endl << "Вартість квитка " << T[3].price << endl;
    int min = T[0].price, minnumber = T[0].numder;
    char city;
   

    for (int i = 0; i < m; ++i)
    {

        if (T[i].price < min) {
            min = T[i].price;

        }
        if (T[i].numder < minnumber)
        {
            minnumber = T[i].numder;
        }

       




    }
    cout << "Номер бюджетного поїзда " <<  minnumber << endl  << "Ціна " << min;
}


