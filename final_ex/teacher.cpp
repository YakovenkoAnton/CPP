#include "teacher.h"
#include <iostream>

void teacher::get_data()
{
    Person::get_data();
    cout << "������� ������� ";
    cin >> kaf;
    cout << "������� ���� ";
    cin >> score;
    status = "�������������";
    prim.append("����:");
    prim.append(to_string(score));
    prim.append(",���.:");
    prim.append(kaf);
};

Person teacher::enterTeacher()
{
    Person* per;
    {
        per = new teacher;
        per->get_data();
        return *per;
    }
}
