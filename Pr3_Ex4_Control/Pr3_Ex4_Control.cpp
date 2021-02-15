// Задание 4. Рекурсивная функция суммы ряда S= 5 + 10 + 15 + … + 5·n,

#include <iostream>
using namespace std;
int sum(int n) 
{
    int element;
    if (n == 1) return 5;
    else return  5*n+sum(n-1);
}

int main()
{
    int n = 1;
    system("chcp 1251");
    cout << "Введите n"<<endl;
    cin >> n;
    cout << sum(n);
}

