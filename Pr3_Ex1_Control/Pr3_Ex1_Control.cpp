#include <iostream>
#include <math.h>

using namespace std;

double len(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}

double squareTriangle(double a, double b, double c) 
{   
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}



int main()
{
    system("chcp 1251");

    double s = 0;
    int n = 5; //n угольник
    double a, b, c = 0;
    int* x = new int[n];
    int* y = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "x[" << i + 1 << "]=";
        cin >> x[i];
        cout << "y[" << i + 1 << "]=";
        cin >> y[i];
    }

    for (int i = 0; i < (n - 2); i++) 
    {   
        a = len(0, 0, x[i + 1], y[i + 1]);
        b = len(x[i + 1], y[i + 1], x[i + 2], y[i + 2]);
        c = len(x[i + 2], y[i + 2], 0, 0);
        s += squareTriangle(a, b, c);
    }

    cout << "Площадь: " << s;

}
