#include "student.h"

void student::get_data()
{
    human::get_data();
    cout << "������� ������:";
    cin >> score;
};

void student::print_data()
{
    cout << "\n�������:\n";
    human::print_data();
    cout << "\n������:" << score << endl;
};