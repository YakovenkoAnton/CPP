﻿#include <iostream>
#include <string>
using namespace std;




class Student
{


public:
	void set_name(string student_name)
	{
		name = student_name;
	}
	string get_name()
	{
		return name;
	}
	void set_last_name(string student_last_name)
	{
		last_name = student_last_name;
	}
	string get_last_name()
	{
		return last_name;
	}
	void set_scores(int student_scores[])
	{
		for (int i = 0; i < 5; ++i) {
			if (student_scores[i] > 5)
			{
				throw ExScore("в функции set_scores()", student_scores[i]);
				scores[i] = student_scores[i];
			}
		}
	}
	void set_average_score(double ball)
	{
		average_score = ball;
	}
	double get_average_score()
	{
		return average_score;
	}

private:
	int scores[5];
	double average_score;
	string name;
	string last_name;

	public: 
		class ExScore //класс исключений
		{

		public:
			string origin; //для имени функции
			int iValue; //для хранения ошибочного значения

			ExScore(string org, int sc)
			{
				origin = org; //строка с именем виновника ошибки
				iValue = sc; //сохраненное неправильное значение
			}
		};
};

int main()
{
	system("chcp 1251");
	Student student01;
	string name;
	string last_name;
	int scores[5];
	cout << "Name: ";
	getline(cin, name);
	cout << "Last name: ";
	getline(cin, last_name);
	int sum = 0;
	for (int i = 0; i < 5; ++i) 
	{
		cout << "Score " << i + 1 << ": ";
		cin >> scores[i];
		sum += scores[i];
	}
	student01.set_name(name);
	student01.set_last_name(last_name);
	try
	{
		student01.set_scores(scores);
	}
	catch (Student::ExScore& ex)
	{
		cout << "\nОшибка инициализации " << ex.origin;
		cout << "\nВведенное значение оценки " << ex.iValue << "является недопустимым\n";
	}

	double average_score = sum / 5.0;
	student01.set_average_score(average_score);
	cout << "Average ball for " << student01.get_name() << " "
		<< student01.get_last_name() << " is "
		<< student01.get_average_score() << endl;
	return 0;
}


