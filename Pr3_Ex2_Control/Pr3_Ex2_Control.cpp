#include <iostream>
#include <math.h>
using namespace std;

double pow_3(double a) 
{
    return pow(a, 1.0 / 3);
}

double iter_3(double a) 
{
    double xCurr, xPrev;
    xCurr = a;
    do
    {
        xPrev = xCurr;
        xCurr = (a / (xPrev * xPrev) + 2 * xPrev) / 3;
    } while (abs(xPrev - xCurr) > 1e-10);
    return xCurr;
}


int main()
{
    system("chcp 1251");
    double a;
    
    std::cout << "Введите число, для вычисления кубического корня: ";
    cin >> a;
    
    cout << "Значение, рассчитанное по итерационному алгоритму: " << iter_3(a) << endl;
    cout << "Значение, рассчитанное стандартной функцией pow: " << pow_3(a);

}

