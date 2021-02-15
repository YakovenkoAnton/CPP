// Определение високосного года
// Год является високосным, если его номер кратен 4, но не кратен 100, а также, если он кратен 400.

#include <iostream>

using namespace std;

int main()
{
    system("chcp 1251");
    int year;
    cout << "Введите год: ";
    cin >> year;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) 
        cout << "YES";
    else 
        cout << "NO";
}
