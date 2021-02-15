// Передача массива в функцию
//Выведите значение суммы на экран. 7. Постройте и протестируйте приложение.. Добавьте новую переменную и присвойте среднее значение элементов массива,
// выведите ее на экран //Добавьте в функции main() новые возможности обработки данных массива : 
//a.расчет суммы отрицательных элементов,
//b.расчет суммы положительных элементов, 
//c.расчет суммы элементов с нечетными индексами,
//d.расчет суммы элементов с четными индексами.

#include <iostream>

using namespace std;

int sum(const int Arr[], const int N) 
{   
    int s = 0;
    for (int i = 0; i < N; i++)
    {
        s += Arr[i];
    }
    return s;
}

double average(const int Arr[], const int N)
{
    return (double)sum(Arr, N) / N;
}

int sum_positive(const int Arr[], const int N) 
{
    int s = 0;
    for (int i = 0; i < N; i++)
    {
        if (Arr[i] >0) s+= Arr[i];
    }
    return s;
}

int sum_negative(const int Arr[], const int N) 
{
    int s = 0;
    for (int i = 0; i < N; i++)
    {
        if (Arr[i] < 0) s += Arr[i];
    }
    return s;
}
int sum(const int Arr[], const int N, bool even)
{
    int s = 0;
    int i = (even) ? 0 : 1;
    for (i; i < N; i = i + 2)
    {   
        s += Arr[i];
    }
    return s;
}

void print_res(const int mas[], const int n)
{
    cout << "Сумма всех элементов массива: " << sum(mas, n) << endl;
    cout << "Среднее: " << average(mas, n) << endl;
    cout << "Сумма всех положительных элементов массива: " << sum_positive(mas, n) << endl;
    cout << "Сумма всех отрицательных элементов массива: " << sum_negative(mas, n) << endl;
    bool even = true;
    bool not_even = false;
    cout << "Сумма всех четных элементов массива: " << sum(mas, n, even) << endl;
    cout << "Сумма всех нечетных элементов массива: " << sum(mas, n, not_even) << endl;
}

int main()
{
    system("chcp 1251");
    const int n = 10;
    int mas[n];
    
    for (int i = 0; i < n; i++)
    {
        cout << "mas[" << i << "]=";
        cin >> mas[i];
    }

    print_res(mas, n);
}
