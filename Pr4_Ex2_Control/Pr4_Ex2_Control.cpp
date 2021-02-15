// Реализация ввода данных: Требуется реализовать функцию Input(a, b)

#include <iostream>
using namespace std;


bool Input(int a, int b) 
{
    if ((a > 0) && (b > 0)) return true;
    else return false;
}

int main()
{
    system("chcp 1251");
    int a, b;
    cout << "Введите два целых положительных числа: ";
    cin >> a >> b;
    if (Input(a, b) == false) // if(!Input(a,b))
    {
        cerr << "error";
        return 1;
    }
    int s = a + b;
    std::cout << "s="<<s;
    return 0;
    
}

