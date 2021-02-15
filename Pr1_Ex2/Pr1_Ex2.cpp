#include <iostream>

using namespace std;

int main()
{
    system("chcp 1251");
    double x;
    //int x;
    string name;
    double a, b; cout << "\nВведите a и b:\n";
    cin >> a; // ввод с клавиатуры значения a
    cin >> name;
    cin >> b; // ввод с клавиатуры значения b
    x = a / b; // вычисление значения x
    cout.precision(3);
    cout << "\nx = " << x << endl; //вывод результата на экран
    cout << "Привет, " << name << "!\n";


    cout << "Размер (а/b): " << sizeof(a / b) << ends << " Размер х: "  << sizeof(x) << endl;
    return 0;
}