#include "human.h"

void human::print_data()
{
	cout << last_name << " " << name << " " << second_name;
};

void human::get_data()
{
	cout << "\n¬ведите фамилию:";
	cin >> last_name;
	cout << "¬ведите им€:";
	cin >> name;
	cout << "¬ведите отчество:";
	cin >> second_name;
};
