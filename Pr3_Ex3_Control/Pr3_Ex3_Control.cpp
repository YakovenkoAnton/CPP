// Задание 3. Работа с различными треугольниками

#include <iostream>
using namespace std;

double squareTriangle(double a, double b, double c)
{
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

double squareTriangle(double a)
{
    double p = (3 * a) / 2;
    return sqrt(p * (p - a) * (p - a) * (p - a));
    
}

int main()
{
    system("chcp 1251");
   int type;
   cout << "Выберете тип треугольника:"<< endl<< "РАВНОсторонний -> 0" << endl << "РАЗНОсторонний -> 1"<<endl;
   cin >> type;
   double a, s=0;
   

   switch (type)
   {
   case 0:
       cout << "Введите длину стороны:";
       cin >> a;
       s = squareTriangle(a);
       break;
   case 1:
       cout << "Введите длины сторон:"<< endl;
       double b, c;
       b = c = 0;
       cin >> a;
       cin >> b;
       cin >> c;
       s = squareTriangle(a, b, c);

   }
   cout << "Площадь треугольника: " << s;

}

