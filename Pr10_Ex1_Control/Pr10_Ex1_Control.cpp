#include <iostream>
#include "Dot.h"
#include "Triangle.h"

using namespace std;

int main()
{
    system("chcp 1251");
    Dot a, b(0, 50), c(25.1, 25);
    Triangle tr(a, b, c);
    tr.Print_dist();
    cout << "\nПериметр: " << tr.Per();
    cout << "\nПлощадь: " << tr.Square() << endl;
  
}

