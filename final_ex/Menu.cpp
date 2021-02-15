#include "Menu.h"
#include <iostream>
#include <iomanip>
#include "Person.h"
#include "student.h"
#include "teacher.h"
#include "another.h"

using namespace std;

string filename = "test.txt";
map <string, Person> persons;
Person temp;

ostream& operator<< (ostream& out, const Person& p)
{
	out << setw(12)<<left<<p.last_name<< setw(12) <<p.name<<setw(15)
		<<p.second_name<< setw(18) <<p.address<<setw(14)<<p.status<< setw(25) << p.prim<<"no data";

	return out;
}

void Menu::print() 

{
	cout << setw(17) << left <<"id_���"<<setw(12)<< "�������" << setw(12) << "���" << setw(15) 
		<< "��������" << setw(18) <<"�����"<<setw(14) << "������" <<setw(25)<< "����������"<<setw(8)<<"�������\n\n";
}


void Menu::lowerMenu()
{
	int item;
	while (true)
	{
		cout << "	������� 1 ��� ���������� ��������\n";
		cout << "	������� 2 ��� ���������� �������������\n";
		cout << "	������� 3 ��� ���������� ������ �����������\n";
		cout << "	������� 4 ��� �������� � ������� ����\n" << endl;
		cin >> item;
		switch (item)
		{
		case 1:
			temp = student::enterStud();
			persons[temp.get_FIO()] = temp;
			writeFile();
			break;
		case 2:
			temp = teacher::enterTeacher();
			persons[temp.get_FIO()] = temp;
			writeFile();
			break;
		case 3:
			temp = another::enterAnother();
			persons[temp.get_FIO()] = temp;
			writeFile();
			break;
		case 4:
			return;
		default:
			cout << "�������� ������� 1, 2, 3" << endl;
		}
		system("pause");
		system("cls");
	}
}


void Menu::show()
{
	ReadFile();
	int item;
	while (true)
	{
		cout << "������� 1 ��� ������ ������ \n";
		cout << "������� 2 ��� ���������� ����� ������\n";
		cout << "������� 3 ��� ��������������\n";
		cout << "������� 4 ��� ����������\n" << endl;
		cin >> item;
		switch (item)
		{
		case 1:
			system("cls");
			print();
			printMap();

			
			break;
		case 2:
			lowerMenu();
			break;
		case 3:
			//inputStud();
			//writeFile();
			break;
		case 4:
			return;
		default:
			cout << "�������� ������� 1, 2, 3, 4" << endl;
		}
		system("pause");
		system("cls");
	}
}

void Menu::ReadFile()
{
	ifstream input(filename.c_str());
	string line;
	while (getline(input, line))
	{
		string key, surname, name, secname, address, status, prim;
		istringstream line_input(line);
		line_input >> setw(17) >> left >> key >> setw(12) >> surname >> setw(12) >> name >> setw(15) >>
			secname >> setw(18) >> address>>setw(14)>>status>>setw(25)>>prim;
		Person* person = new student;
		person->set_data(surname, name, secname, address, status, prim);
		persons[key] = *person;
	}

	
}

void Menu::printMap() 
{
	for (auto it = persons.begin(); it != persons.end(); ++it)
	{
		cout << setw(17) << left << it->first << setw(12) << it->second << endl;
	}
}



void Menu::writeFile()
{
	ofstream fout;
	fout.open(filename, ios::out);
	for (auto it = persons.begin(); it != persons.end(); ++it) 
	{
		fout << setw(18) << left << it->first << it->second << endl;
	}
	fout.close();
	cout << "������ ������� ���������. ";
}