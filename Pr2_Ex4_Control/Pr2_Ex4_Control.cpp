#include <iostream>
#include <math.h>
#include <time.h>

using namespace std;

double radius(double x, double y)
{
    return sqrt(x * x + y * y);
}

int score(double radius) 
{
    if (radius <= 1) return 10;
    else if (radius <= 2) return 5;
    else if (radius <= 3) return 1;
    else return 0;
}

void check_skill(int num_shot) 
{
    switch (num_shot)
    {
    case 5:
        cout << "Вы снайпер!";
        break;
    case 6:
    case 7: cout << "Вы хороший стрелок!";
        break;
    case 8:
    case 9: cout << "Вы стрелок!";
        break;

    default:
        cout << "Пока Вы новичок!";
        break;
    }
}



int main()
{
    system("chcp 1251");
    const int max_score = 50;
    int num_shot = 0;
    int total_score = 0;
    double wind = 0;
    double air_drag = 0;
    double x, y;

    while (total_score<max_score)
    {
        cout << "Введите координаты прицеливания" << endl;
        cin >> x >> y;
        num_shot++;
        srand(time(NULL));
        wind = (rand() % 21 - 10.0) / 10.0;
        air_drag = (rand() % 21 - 10.0) / 10.0;
        total_score += score(radius(x, y));
        cout<<"Ветер: " << wind
            << "\nСопротивление воздуха: "<<air_drag
            <<"\nОчков за выстрел: "<< score(radius(x+wind, y))
            <<"\nВсего очков: "<<total_score
            <<"\nПопыток стрельбы использовано: "<< num_shot
            <<endl;
    }    
    check_skill(num_shot);

}

