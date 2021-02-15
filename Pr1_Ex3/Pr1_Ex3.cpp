#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    system("chcp 1251");
    double a, b, c, p, s;
    cout << "Введите зачение периметра; ";
    cin >> p;
    a = b = c = p / 3;
    p /= 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    cout.precision(2);
    cout << "Сторона\tПлощадь\n" << a << "\t" << s;


}
