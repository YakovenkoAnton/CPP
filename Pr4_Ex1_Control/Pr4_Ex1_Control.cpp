// Вычисление корней квадратного уравнения

#include <iostream>
#include <math.h>

using namespace std;

int Myroot(double a, double b, double c, double& x1, double& x2)
{
    double d = b * b - 4 * a * c;
    if (d < 0) return -1;
    if (d == 0)
    {
        x1 = x2 = -(b / (2 * a));
        return 0;
    }
    else
    {
        x1 = ((-b) + sqrt(d)) / (2 * a);
        x2 = ((-b) - sqrt(d)) / (2 * a);
        return 1;
    };

}

int main()
{
    system("chcp 1251");
    double a, b, c, x1, x2;
    cout << "Введите коэффициенты" << endl;
    cin >> a >> b >> c;
    int result = Myroot(a, b, c, x1, x2);
    switch (result)
    {
    case -1:
        cout << "Нет действительных корней";
        break;

    case 0:
        cout << "Корни совпадают: x1=x2=" << x1;
        break;

    case 1:
        cout << "х1=" << x1 << "\tх2=" << x2;
    }

}
