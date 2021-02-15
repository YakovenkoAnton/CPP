#include "student.h"

void student::get_data()
{
    human::get_data();
    cout << "Введите оценку:";
    cin >> score;
};

void student::print_data()
{
    cout << "\nСтудент:\n";
    human::print_data();
    cout << "\nОценка:" << score << endl;
};