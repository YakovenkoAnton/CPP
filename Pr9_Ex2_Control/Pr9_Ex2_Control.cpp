#include <iostream>
#include "Time.h"

using namespace std;

int main()
{
    system("chcp 1251");
    Time t1(11, 10, 110);
    t1.ShowTime();

    try
    {
        Time t2(-11, 99, 59);
        t2.ShowTime();
    }
    catch (Time::ExScore& ex) 
    {
        cout << "\nОшибка инициализации " << ex.origin;
        cout << "\nВведенное значение времени " << ex.iValue << " является недопустимым\n";
    }
}
