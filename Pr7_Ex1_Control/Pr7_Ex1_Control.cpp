#include <iostream>
using namespace std;

struct Time
{
    int h;
    int m;
    int s;
    

    void ShowTime()
    {
        cout << h << ":" << m << ":" << s<<"\n";
    }
};

Time AddTime(const Time& t1, const Time& t2)
{
    Time t;
    t.h = t1.h + t2.h;
    t.m = t1.m + t2.m;
    t.s = t1.s + t2.s;
    
    if (t.s >= 60)
    {
        t.s -= 60;
        t.m++;
    }

    if (t.m >= 60)
    {
        t.m -= 60;
        t.h++;
    }
    return t;
}

Time SubTime(const Time& t1, const Time& t2)
{
    Time t;
    t.h = t1.h - t2.h;
    t.m = t1.m - t2.m;
    t.s = t1.s - t2.s;

    if (t.s < 0)
    {
        t.s += 60;
        t.m--;
    }

    if (t.m < 0)
    {
        t.m += 60;
        t.h--;
    }
    return t;
}

Time InputTime()
{
    Time t;
    cout << "\nВведите число часов: ";
    cin >> t.h;
    cout << "Введите число минут: ";
    cin >> t.m;
    cout << "Введите число секунд: ";
    cin >> t.s;

    return t;
}


int main()
{
    system("chcp 1251");
    Time t1 = InputTime();
    Time t2 = InputTime();
    Time t3 = AddTime(t1, t2);
    Time t4 = SubTime(t1, t2);

    t1.ShowTime();
    t2.ShowTime();
    t3.ShowTime();
    t4.ShowTime();
}
