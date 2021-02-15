// Задание 2. Сохранение данных в текстовый файл
// В решении упражнения 2 занятия 5 создайте текстовый файл и 
// запишите в него два массива : исходный и отсортированный.

#include <iostream>
#include <fstream>
using namespace std;

void printArr(int a[], const int N) 
{
    string filename = "test.txt";
    ofstream fout;
    fout.open(filename, ios::app);
    for (int i = 0; i < N; i++)
        fout << a[i] << '\t';
    fout << endl;
    fout.close();
}

void sortArr(int a[], const int N) 
{
    int min = 0;
    int buf = 0;
    for (int i = 0; i < N; i++)
    {
        min = i;
        for (int j = i + 1; j < N; j++)
            min = (a[j] < a[min]) ? j : min;

        if (i != min)
        {
            buf = a[i];
            a[i] = a[min];
            a[min] = buf;
        }
    }
}

int main()
{
    const int N = 10;
    int a[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };

    printArr(a, N);
    sortArr(a, N);
    printArr(a, N);
}

