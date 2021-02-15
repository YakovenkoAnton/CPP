// Pr3_Ex5_Control.cpp 
// Задание 5. Применение рекурсии для перевода целого числа в двоичный код


#include <iostream>
using namespace std;
void bin(int num) 
{
    if (num >= 2) bin(num / 2);
    cout << num % 2;
}


int main()
{
    system("chcp 1251");
    int num;
    cout << "Введите число: ";
    cin >> num;
    bin(num);




}

