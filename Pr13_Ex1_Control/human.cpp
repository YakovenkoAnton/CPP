#include "human.h"

void human::print_data()
{
	cout << last_name << " " << name << " " << second_name;
};

void human::get_data()
{
	cout << "\n������� �������:";
	cin >> last_name;
	cout << "������� ���:";
	cin >> name;
	cout << "������� ��������:";
	cin >> second_name;
};
