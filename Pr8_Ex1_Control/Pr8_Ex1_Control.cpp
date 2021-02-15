#include <iostream>
#include "Time.h"

using namespace std;

int main()
{
    Time t1(11, 10, 110);
    t1.ShowTime();

    Time t2(11, 99, 59);
    t2.ShowTime();

    Time t3;
    t3.ShowTime();
    t3.AddTime(t1, t2).ShowTime();
}
