#include "another.h"
#include "teacher.h"
#include <iostream>

void another::get_data()
{
    Person::get_data();
    status = "��.��������";
    cout << "������� ���������� ";
    cin >> prim;
};

Person another::enterAnother()
{
    Person* per;
    {
        per = new another;
        per->get_data();
        return *per;
    }
}
