// Задание 2. Определение наибольшего из трех чисел

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    system("chcp 1251");
    int a, b, c;
    a= b= c = 0;
    cout << "Введите числа:" << endl;
    cin >> a >> b >> c;
    if (a >= b && a > c) cout << a;
    else if (b > a && b >= c) cout << b;
    else if (c >= a && c > b) cout << c;
    else cout << "Числа равны";

}
