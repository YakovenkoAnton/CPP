#include "student.h"
using namespace std;

void student::get_data()
{
    Person::get_data();
    cout << "������� ��������� ";
    cin >> faculty;
    cout << "������� ������� ��� ";
    cin >> score;
    status = "�������";
    prim.append("��.����:");
    prim.append(to_string(score));
    prim.append(",���-�:");
    prim.append(faculty);

};

Person student::enterStud()
{
    Person* per;
    {
        per = new student;
        per->get_data();
        return *per;
    }
}

void student::print_data()
{
    
    Person::print_data();
    cout << "�������:";
    cout << "  ���������"<< faculty<<"  ������:" << score << endl;
};